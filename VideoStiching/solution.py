
class TimePoint:
    def __init__(self,start,end):
        self.start = start
        self.end = end
    
    def __lt__(self,other):
        
        if self.start<other.start:
            return True
        else:
            if self.start==other.start:
                return self.end<other.end
                
    def __repr__(self):
        return ""+str(self.start)+":"+str(self.end)

class Solution:
    def videoStitching(self, clips: List[List[int]], T: int) -> int:
        
        timestamps = []
        for stamp in clips:
            timestamps.append(TimePoint(stamp[0],stamp[1]))
        
        timestamps = sorted(timestamps)
        result = [timestamps[0]]
        
        for i in range(1,len(timestamps)):
            time = timestamps[i]
            
            if result[-1].end>=T or result[-1].end<time.start:
                break
            
    
            if result[-1].start==time.start and result[-1].end==time.end:
                continue
            
            elif result[-1].start>=time.start and result[-1].end<time.end:
                result[-1]=time
                continue
            
            elif result[-1].end>=time.end:
                continue
            
            elif result[-1].start >= time.start:
                result[-1]=TimePoint(result[-1].start,time.end)
            
            else:
                result.append(TimePoint(result[-1].end, time.end))
        
        return len(result) if result[0].start==0 and result[-1].end>=T else -1
        
        '''
        timepoint = collections.namedtuple('timepoint', ['start', 'end'])
        times = sorted([timepoint(clip[0], clip[1]) for i, clip in enumerate(clips)])
        res = [times[0]]
        for time in times:
            if res[-1].end >= T or time.start > res[-1].end:
                break
            if time.start == res[-1].start and time.end > res[-1].end:
                res[-1] = time
            elif time.end <= res[-1].end:
                continue
            elif time.start <= res[-1].start:
                res[-1] = timepoint(res[-1].start, time.end)
            else:
                res.append(timepoint(res[-1].end, time.end))
        return len(res) if res[0].start == 0 and res[-1].end >= T else -1
        '''
                
            
    
        
        
        