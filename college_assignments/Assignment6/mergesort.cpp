#include<bits/stdc++.h> 
using namespace std;
void merge(vector<int> &x,int low,int mid,int high)
{
   vector<int> y;
   int i = low,j = mid+1;
   while(i<=mid && j<=high)
   { 
       if(x[i]<x[j])
       { y.push_back(x[i]);
       i++; }
       else if (x[j]<x[i])
       {
           y.push_back(x[j]);
           j++;
       }
       else
       {
           y.push_back(x[i]);
           y.push_back(x[j]);
           i++,j++;
       }
   }
   while(i<=mid)
   {
       y.push_back(x[i]);
       i++;
   }
   while(j<=high)
   {
       y.push_back(x[j]);
       j++;
   }
   int counter = 0;
   for(int i = low;i<=high;i++)
   x[i] = y[counter++];
   

}
void mergesort(vector<int> &x,int low,int high)
{
    if(low<high)
    {
        int mid = low + (high-low)/2;
        mergesort(x,low,mid);
        mergesort(x,mid+1,high);
        merge(x,low,mid,high);
    }
   
}
void solve()
{
   int n;
   cout<<"Enter no. of elements in the array: ";
   cin>>n;
   vector<int> x(n);
   cout<<"Enter elements of array: ";
   for(int i = 0;i<n;i++)
   { 
       cin>>x[i];
   }
    mergesort(x,0,n-1);
   cout<<"Sorted array:\n";
   for(int elem:x)
   cout<<elem<<" ";


}
int main()
{
solve();
return 0;
}
