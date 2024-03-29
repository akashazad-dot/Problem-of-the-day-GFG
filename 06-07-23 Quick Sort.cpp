
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        // Your code here
        int pivot = low;
        while(low < high) {
            while(arr[pivot] >= arr[low])
                low++;
            while(arr[pivot] < arr[high])
                high--;
            if(low < high)
                swap(arr[low], arr[high]);
        }
        // for optmization purpose, you can remove this if condition
        if(high != pivot)
            swap(arr[high], arr[pivot]);
        return high;
    }
};
