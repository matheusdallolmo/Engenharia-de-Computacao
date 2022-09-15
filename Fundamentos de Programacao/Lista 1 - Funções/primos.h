int primo (int num)
{
    int i, contDiv = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            contDiv++;
            break;
        }
    }

    return (contDiv);
}
