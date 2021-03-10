#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    int i,j,index_min,min;
    for(int i=0;i<n-1;i++)
    {
        index_min=i; 
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index_min])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            min=a[i];
            a[i]=a[index_min];
            a[index_min]=min;
        }
    }
}
//Time complexity is O(n^2)
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The arrey loolks like:"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    selection_sort(a,n);
    cout<<"After Sort The Array Looks Like:"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    return 0;
}