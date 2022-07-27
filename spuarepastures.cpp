#include <iostream>
#include <algorithm>
using namespace std;
int rect[2][4],max1[2]={0,0}, min1[2]={10000,10000};
int main()
{
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    cin>>rect[0][0]>>rect[1][0]>>rect[0][1]>>rect[1][1]>>rect[0][2]>>rect[1][2]>>rect[0][3]>>rect[1][3];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            if(max1[i]<rect[i][j]){ max1[i]=rect[i][j];}
            if(min1[i]>rect[i][j]){ min1[i]=rect[i][j];}
        }
    }
    cout <<max(max1[0]-min1[0], max1[1]-min1[1])*max(max1[0]-min1[0], max1[1]-min1[1]);
}