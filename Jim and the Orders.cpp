#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,a,b;
    cin>>n;
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[i] = a+b;
    }
    for(i=0;i<n;i++)
     arr1[i] = arr[i];
    sort(arr1,arr1+n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr[j])
            {
                cout<<j+1<<" ";
                arr[j] = -1;
            }
        }
    }
    
    return 0;
}
