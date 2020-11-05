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
    for(int i = 0;i<n-1;i++)
    {
        for(int j= 0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            swap(x[j],x[j+1]);
        }

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
