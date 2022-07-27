#include <iostream>
#include <numeric>
/*
void func(int array[], int size, int start, int end) {
    int newArray[end-start+1];
    for (int i = start; i < end; i++)
}
*/
using namespace std;
int n, petals[1000],photos;
double avg;

int main()
{
    //freopen("daisy.in", "r", stdin);
    //freopen("daisy.out", "w", stdout);
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>petals[i];
    }
    for (double i=0; i<n; i++){
        for (double j=n-1; j>=i+1;j--){
            avg=0.0;
            for (int k=i; k<j+1; k++){
                avg+=petals[k];
            }
            //cout << "Average: " << avg << " " << j-i+1 << " ";
            avg = avg/(j-i+1);
            //cout<<avg<<endl;
            for (int k=i; k<j+1; k++){
                if (avg==petals[k]){
                    photos++;
                    break;
                }
            }
        }
    }     
    cout<<photos+n;
}