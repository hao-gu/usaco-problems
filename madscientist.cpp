#include <iostream>
using namespace std;
char wanted[1000], has[1000];
int n, start = 0, times = 0;
bool end1 = 0;
int main()
{
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> wanted[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> has[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (wanted[i] != has[i])
        {
            for (int j = n - 1; j >= i; j--)
            {
                if (wanted[j] != has[j])
                {
                    for (int k = i; k <= j; k++)
                    {
                        if (has[k] == 'G')
                        {
                            has[k] = 'H';
                        }
                        else if (has[k] == 'H')
                        {
                            has[k] = 'G';
                        }
                    }
                    times++;
                    break;
                }
                if (j == i)
                {
                    cout << times;
                    return 0;
                }
            }
        }
    }
    cout << times;
}