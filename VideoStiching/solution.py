import collections
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
            if result[-1].end >= T or time.start > result[-1].end:
                break
            if time.start == result[-1].start and time.end > result[-1].end:
                result[-1] = time
            elif time.end <= result[-1].end:
                continue
            elif time.start <= result[-1].start:
                result[-1] = TimePoint(result[-1].start, time.end)
            else:
                result.append(TimePoint(result[-1].end, time.end))
        
        return len(result) if result[0].start==0 and result[-1].end>=T else -1
        
        
                
            
    
        
        
        