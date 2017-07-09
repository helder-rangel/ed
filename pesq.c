int sequencial(int v[], int n, int k)
{
    int i;
    for (i=0; i<n; i++)
        if (k == v[i])
            return i;
    return -1;
}

int binaria(int v[], int n, int k)
{
    int low=0, hi=n-1, mid;
    while (low <= hi)
    {
        mid = (low + hi) / 2;
        if (k == v[mid])
            return mid;
        if (k < v[mid])
            hi = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int binrec(int v[], int inicio, int fim, int k)
{
    int meio = (inicio+fim)/2;
    if (inicio>fim)
        return -1;
    if (v[meio]==k)
        return meio;
    if (v[meio]>k)
        return binrec(v,inicio,meio-1,k);
    else
        return binrec(v,meio+1,fim,k);
}




