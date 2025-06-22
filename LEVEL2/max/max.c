/*

Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.

*/

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;

    if(len == 0)
        return 0;

    i = 0;
    max = tab[0];
    while(len > i)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
    i++;
    }
    return max;
}
