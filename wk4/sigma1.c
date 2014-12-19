



int sigma(int m)
{
    int sum = 0;
    
    for (int i = 1; i <= m; i++) 
    {
        sum += i;
    }
    return m + sigma(m - 1);  
}
