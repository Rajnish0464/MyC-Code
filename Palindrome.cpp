#include<iostream>
using namespace std;
int main(){
int n,flag;
cin>>n;
int arr[n];


for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0,j=n-1;i<n,j>=0;i++,j--)
{
    if(arr[i]==arr[j]){
        flag=1;
    }

}

if (flag==1)
{
    cout<<"Palindrome"<<endl;
}
else{ cout<<"Not Palindrome";}


 return 0;
}
