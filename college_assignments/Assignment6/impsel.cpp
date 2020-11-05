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
  int i,j;
  for(i = 0,j = n-1;i<j;i++,j--)
  {   int minimum = x[i],maximum = x[j],min_index=i,max_index=j;
      for(int k= i;k<=j;k++)
      {
           if(x[k]<minimum)
           {
                minimum = x[k];
                min_index = k;
           }
           if(x[k]>maximum)
           {
               maximum = x[k];
               max_index = k;
           }
      }
     swap(x[i], x[min_index]); 
        if (x[min_index] == maximum)  
            swap(x[j], x[min_index]); 
        else
            swap(x[j], x[max_index]); 
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
