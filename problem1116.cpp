#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            double div;
            div=(double)x/y;
            cout<<fixed<<setprecision(1)<<div<<endl;
        }
    }
    return 0;
}