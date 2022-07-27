#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
char cows[52];
bool used[26];
int bruh[26], pairs = 0, j_copy;
vector<char> crossing;
int main()
{
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    for (int i = 0; i < 52; i++)
    {
        cin >> cows[i];
    }
    for (int i = 0; i < 52; i++)
    {
        if (used[cows[i] - 'A' - 1] == 1)
        {
            //
            for (int j = 0; j < 52; j++)
            {
                if (crossing[j] == cows[i])
                {
                    j_copy = j;
                    break;
                }
            }
            pairs += crossing.size() - j_copy - 1;
            crossing.erase(crossing.begin() + j_copy);
        }
        else
        {
            used[(cows[i] - 'A') - 1] = 1;
            crossing.push_back(cows[i]);
        }
    }
    cout << pairs;
}