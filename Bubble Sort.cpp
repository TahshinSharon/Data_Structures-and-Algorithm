#include<iostream>
using namespace std;
void Bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Array Values Are:"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    Bubble_sort(a,n);
    cout<<"The Sorted Array Is:"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    return 0;
}