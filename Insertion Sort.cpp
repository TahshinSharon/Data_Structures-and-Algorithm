#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    cout<<"The Array Value Are:"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    insertion_sort(a,n);
    cout<<"After Insertion Sort The Array Value Are:"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    return 0;
}