//18
#include <iostream>
#include <vector>

template<typename T>
T func( std::vector<T> arr, T lim){
    T dop;
    for(T i = arr.size(); i >= 0; i--)
        if(arr[i] <= lim){
            dop = arr[i];
            break;
        }
    return dop;
}

int main() {
    int lim, size;
    std::cout << "Enter Size of array: ";
    std::cin >> size;

    std::cout << "Enter Lim: ";
    std::cin >> lim;

    std::vector<int> arr;
    arr.resize(size);

    std::cout << "Enter numbers of array: ";
    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
    }

    std::cout << func(arr, lim) << std::endl;

    return 0;
}





