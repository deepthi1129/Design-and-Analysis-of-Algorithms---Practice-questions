Recursive approach:

#include<iostream>
using namespace std;
#define INF 9999999
int maxsubarray(int array[], int low, int mid, int high){
    int leftsum=-INF;
    int rightsum=-INF;
    int maxleft,maxright,sum=0;;
    for(int i=mid;i>=low;i--){
        sum+=array[i];
        if (sum>leftsum){
            leftsum=sum;
            maxleft=i;
        }
    }
    sum=0;
    for(int i=mid;i<=high;i++){
        sum+=array[i];
        if (sum>rightsum){
            rightsum=sum;
            maxright=i;
        }
    }
    
    return (maxleft,maxright,leftsum+rightsum);
}

int maxsub(int array[],int low, int high){
    if (high==low){
        return (low, high, array[low]);}
    else{
        int mid=(low+high)/2;
        int ll,lh,rl,rh,cl,ch,leftsum,rightsum,crosssum;
        ll,lh,leftsum=maxsub(array,low, mid);
        rl,rh,rightsum=maxsub(array,mid+1,high);
        cl,ch,crosssum=maxsubarray(array, low, mid, high);
        if (leftsum>=rightsum && leftsum>=crosssum){
            return (ll,lh, leftsum);
        }
        else if(leftsum<=rightsum && rightsum>=crosssum){
            return(rl,rh,rightsum);
        }
        else
        return (cl,ch,crosssum);
    }
    }

int main(){
    int array[]={1,1,1,1,1,1,1,1,1,1};
    int low=0;
    int high=sizeof(array)/sizeof(int);
    int mid=(low+high)/2;
    cout<<maxsubarray(array,low,mid,high);
    return 0;
}


iterative approach:

#include<iostream>
using namespace std;
int main(){
    int array[2]={2,1};
    int low=0;
    int med;
    int sum=0;
    int total=-999999;
    int high=2;
    int temp[high];
    int j=0;
    for (int i=low;i<high;i++){
        sum+=array[i];
        cout<<sum<<endl;
        if(sum>total){
        total=sum;
        med=i;
        temp[j++]=array[i];
        for(int x=0;x<=high;x++)
        cout<<array[x]<<endl;
        }
        else{
            j=0;
            sum=0;
            total=0;
        }
    }
    int i=0;
        while(temp[i]!='\0')
        cout<<temp[i++];
    return 0;
}
