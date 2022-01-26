// O(n) time complexity
#include <vector>
#include <iostream>
using namespace std;
//When you pass an array to a function, it decays into a pointer to the first element, at which point knowledge of its size is lost
void linearsearch(int x, int arr[], int n)
{
    int found =0;    

    for(int i = 0;i<10;i++)
    {
        if(arr[i]==x)
          { cout<<i;
            found = 1;
            break;}
    }
    if(found==0)
        cout<<"No element found";
    
}
int main()
{
    int arr[] = {1,2,3,4,6,7,8,3,11,5,65};
    int x;
    cin>>x;
    int n = sizeof(arr) / sizeof(arr[0]);
    linearsearch(x,arr,n);
    return 0;
}