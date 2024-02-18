#include <iostream>

template <class Y>
void sort(Y arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Y temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std ::cout << "The elements are :";
    for (int i = 0; i < size; i++)
    {
        std ::cout << "  " << arr[i];
    }
}

int main()
{

    int arr1[5] = {5, 3, 4, 2, 1};
    sort(arr1, 5);

    std::cout << "\n";

    char arr2[2] = {'a', 'Z'};
    sort(arr2, 2);

    std::cout << "\n";
    float arr3[3] = {82.3,34.5,16.3};
    sort(arr3,3);

    return 0;
}