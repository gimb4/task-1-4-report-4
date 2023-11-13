#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

        int arr[] = { -1, 2, -3, 4, -5 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int shift = 0; 

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                shift++;
            }
            else {
                arr[i - shift] = arr[i];
            }
        }

        n -= shift;

        
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }

        return 0;
    }