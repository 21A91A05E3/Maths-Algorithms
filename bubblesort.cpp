If we have total n elements, then we need to repeat this process for n-1 times.

It is known as bubble sort, because with every complete iteration the largest element in the given array, bubbles up towards the last place or the highest index, just like a water bubble rises up to the water surface.

Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element and swapping them if required.



#include<bits/stdc++.h>
using namespace std;
void bubblesort(int i,int arr[],int n)
{
	if(i==n-1)
	{
		bubblesort(0,arr,n-1);
		return;
	}
	if(n==0)return;
	if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
	bubblesort(i+1,arr,n);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	bubblesort(0,arr,n-1);
	
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	
	

}

//https://www.productplan.com/glossary/bubble-sort/


Following are the Time and Space complexity for the Bubble Sort algorithm.

Worst Case Time Complexity [ Big-O ]: O(n2)
Best Case Time Complexity [Big-omega]: O(n)
Average Time Complexity [Big-theta]: O(n2)
Space Complexity: O(1)
