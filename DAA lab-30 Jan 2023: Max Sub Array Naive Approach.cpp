#include<iostream>
#define INF 9999999
using namespace std;
int main(){
    int numofinputs,sum=-INF,tempsum,start,end;
    
    cin>>numofinputs;
    int array[numofinputs];
    for(int i=0;i<numofinputs;i++){
        cin>>array[i];
    }
    for(int i=1;i<=numofinputs;i++){
        tempsum=0;
        for(int j=0;j<numofinputs;j++){
            if(j<i){
                tempsum+=array[j];
            }
            else{
                tempsum=tempsum+array[j]-array[j-i];
            }
            if(sum<tempsum){
                sum=tempsum;
                start=j-i+1;
                end=j;
            }
        }
    }
    cout<<start+1<<' ';
    cout<<end+1<<endl;
    cout<<sum;
}
