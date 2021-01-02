#include <iostream>

using namespace std;

int partition(int arr[],int lb,int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start ++;
        }
        while(arr[end] > pivot)
        {
            end --;
        }
        if (start < end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;

}

void quicksort(int arr[],int lb,int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }

}

int main()
{
    int arr[] = {2,4,9,13,6,3,7,5,15};
    int lb = 0;
    int ub = 8;
    quicksort(arr,lb,ub);
    cout << "Hello world!" << endl;
    for(int i =0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
