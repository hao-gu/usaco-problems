#include <iostream>
#include <set>

using namespace std;
int n;
bool yes = 0;
string mailboxes;
set<string> subset;
int main()
{
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    cin >> n;
    cin >> mailboxes;

    for (int i = 1; i <= n; i++)
    {
        yes = 1;
        for (int j = 0; j < n - i + 1; j++)
        {
            if (subset.find(mailboxes.substr(j, i)) != subset.end())
            {
                yes = 0;
                break;
            }
            else
            {
                subset.insert(mailboxes.substr(j, i));
            }
        }
        if (yes == 1)
        {
            cout << i;
            return 0;
        }
    }
}