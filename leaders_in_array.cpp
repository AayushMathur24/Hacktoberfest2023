#include <iostream>
using namespace std;
void func(int arr[100],int n)
{
    int x = arr[n-1];
    cout<<"Leader elements are : "<<x<<' ';
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>x)
        {
            cout<<arr[i]<<' ';
            x = arr[i];
        }
    }
}
int main()
{
 int n;
	cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    func(arr,n);
return 0;    
}
