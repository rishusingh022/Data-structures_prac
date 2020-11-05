#include<bits/stdc++.h> 
using namespace std;
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
   for(int i = 0;i<n-1;i++)
   {   
       for(int j = i+1;j<n;j++)
       {
           if(x[i]>x[j])
           swap(x[i],x[j]);
       }
   }
   cout<<"Sorted array:\n";
   for(int elem:x)
   cout<<elem<<" ";

}
int main()
{
solve();
return 0;
}
