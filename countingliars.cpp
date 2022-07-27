#include <iostream>
#include <algorithm>
using namespace std;

int n,point[1000],yes[1000],max1=0;
;
string direction[1000];

int main(){
    freopen("liars.in","r",stdin);
    freopen("liars.out","w",stdout);
    cin>>n;
    for (int i;i<n;i++){
        cin>>direction[i];
        cin>>point[i];
    }
    for (int i=0;i<n;i++){
        if (direction[i]=="G"){
            for (int j=point[i]; j<1000; j++){
              yes[j]+=1;  
            }
        }
        else if (direction[i]=="L"){
            for (int j=point[i]; j>=0; j--){
              yes[j]+=1;  
            }
        }
    }
    for (int i=0;i<1000;i++){
        cout<<yes[i]<<" ";
    }
    for (int i=0;i<n;i++){
        if (max1<yes[i]){
            max1=yes[i];
        }
    }
    cout<< endl<< n << " " << max1;
}
