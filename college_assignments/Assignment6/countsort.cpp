#include<bits/stdc++.h> 
using namespace std;
void solve()
{
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    vector<int> x(n),output(n);
    cout<<"Enter elements of array: ";
    for(int i = 0;i<n;i++)
    {
        cin>>x[i];
    }
    int max_elem = *max_element(x.begin(),x.end()); // To find the Maximum Element in the Array
    vector<int> count(max_elem+1,0);
    
    for(int i = 0;i<n;i++)
    count[x[i]]++;

    for(int i = 1;i<count.size();i++)
    count[i] = count[i-1] + count[i];

    for(int i = 0;i<x.size();i++)
    {
        output[count[x[i]]-1] = x[i];
        count[x[i]]--;

    }

    cout<<"Sorted Array is: ";
    for(int elem:output)
    cout<<elem<<" ";

}
int main()
{

solve();
return 0;
}
