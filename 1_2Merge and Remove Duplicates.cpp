#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 4, 5};
    int arr2[] = {2, 3, 5, 6};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[n1 + n2];

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            if(k == 0 || arr3[k-1] != arr1[i])
                arr3[k++] = arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            if(k == 0 || arr3[k-1] != arr2[j])
                arr3[k++] = arr2[j];
            j++;
        }
        else
        {
            if(k == 0 || arr3[k-1] != arr1[i])
                arr3[k++] = arr1[i];
            i++;
            j++;
        }
    }

    while(i < n1)
    {
        if(k == 0 || arr3[k-1] != arr1[i])
            arr3[k++] = arr1[i];
        i++;
    }

    while(j < n2)
    {
        if(k == 0 || arr3[k-1] != arr2[j])
            arr3[k++] = arr2[j];
        j++;
    }

    for(int i = 0; i < k; i++)
        cout << arr3[i] << " ";

    return 0;
}
