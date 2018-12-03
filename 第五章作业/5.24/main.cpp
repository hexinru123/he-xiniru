#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
int n,num;
int main(){
    num=-1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<=(n+1)/2){
            num+=2;
            for(int j=1;j<=n;j++){
                if(j<=(n-num)/2||j>(n+num)/2){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }
        }else{
            num-=2;
            for(int j=1;j<=n;j++){
                if(j<=(n-num)/2||j>(n+num)/2){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }
        }
        cout<<""<<endl;
    }

return 0;
}
