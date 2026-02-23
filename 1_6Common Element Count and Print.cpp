#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0;
    int count = 0;

    cout << "Common Elements: ";

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i] > arr2[j])
            j++;
        else
        {
            cout << arr1[i] << " ";
            count++;
            i++;
            j++;
        }
    }

    cout << endl;
    cout << "Total Common Elements: " << count;

    return 0;
}
