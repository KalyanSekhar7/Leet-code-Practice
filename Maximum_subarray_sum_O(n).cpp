#include<iostream>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        cout<<"the new number is "<<a[i]<<"\t";
        cout<<"current max is "<<curr_max<<"\t";
        max_so_far = max(max_so_far, curr_max);
        cout<<"maximum so far is "<<max_so_far<<"\n";
   }
   
        
   return max_so_far;

}
 
/* Driver program to test maxSubArraySum */
int main()
{
   int a[] =  {5,4,-1,7,8};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubArraySum(a, n);
   cout << "Maximum contiguous sum is " << max_sum;
   return 0;
}