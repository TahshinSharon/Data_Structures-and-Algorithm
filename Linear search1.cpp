#include<iostream>
using namespace std;
int Linear_search(int a[],int n,int x)
{
    int ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            ans=i;
            return ans;
        }
        else ans=-1;
    }
    return ans;
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter A Value You Want To Search:";
    cin>>x;
    cout<<"Element "<<x<<" is present at position:"<<Linear_search(a,n,x)<<endl;
    return 0;
}