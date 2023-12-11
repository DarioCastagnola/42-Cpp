#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h>

void binaryInsert(int *arr, int n, int start, int end) {
    int mid;
    while (start < end)
    {
        mid = (start + end) / 2;
        
        if (n > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (arr[start] < n && arr[end] > n)
        std::cout << "yes" << std::endl;
    else if (start == end && arr[start] > n)
        std::cout << "prima" << std::endl;
    else if (start == end && arr[start] < n)
        std::cout << "dopo" << std::endl;
    std::cout << start << " " << end << " " << std::endl; 
}

int main()
{
    int a[]
        = { 1, 2, 3, 4, 10, 12, 15, 30, 31};
    int n = sizeof(a) / sizeof(a[0]), i;

    binaryInsert(a, 40, 0, 8);
 
    return 0;
}