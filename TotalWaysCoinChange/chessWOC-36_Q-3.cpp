while (i < 8)
{
    if (board[i][j] == '#')
    {
        ++i;
    }
    else if (board[i][j] == 'k')
    {
        sum = 2;
        hit = true;
        break;
    }
    else
    {
        break;
    }
}