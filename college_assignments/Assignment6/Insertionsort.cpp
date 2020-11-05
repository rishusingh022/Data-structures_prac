#include<bits/stdc++.h> 
using namespace std;
void solve()
{
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    vector<int> x(n);
    cout<<"Enter elements of array: ";
    for(int i = 0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i = 1;i<n;i++)
    {
        int temp = x[i],j=i;
        while(temp<x[j-1])
        {
            x[j]=x[j-1];
            j--;
        }
        x[j]=temp;
    }

    cout<<"Sorted Array is: ";
    for(int elem:x)
    cout<<elem<<" ";

}
int main()
{

solve();
return 0;
}
