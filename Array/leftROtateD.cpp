#include<bits/stdc++.h>
using namespace std ;
void leftreverse(int arr[],int n,int d){
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);

}
int main (){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<"BEFOR CALL FUNCTION"<<endl ;
    for(int i=0 ; i<7;i++){
        cout<<arr[i]<<",";
    }
    leftreverse(arr,7,4);
    cout<<"\n AFTER CALL FUNCTION"<<endl ;
    for(int i =0 ; i<=6;i++){
        cout<<arr[i]<<",";
    }
}
