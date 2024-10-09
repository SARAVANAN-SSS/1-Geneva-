// #include <iostream>
// using namespace std;

// int main() {


//     // 08/10/2024: Array: 

//     // Insertion Sort

//     int n;

//     cin>>n;
    
//     cout<<"Start why not "<<n;

//     return 0;
// }


// -------------------------------------------------------------------------------------


// 09/10/2024 - Binary Search Home Work - TC - log n


#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    
    int start = 0, end = n-1, mid;
    
    while(start<=end){
        mid = start+(end-start/2);
        
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            end = mid-1;
        }else
        start = mid+1;
    }
    
    return -1;
    
}

int main() {
    
    int arr[1000] = {30, 28, 20, 16, 4};
    
    int n = 5;
    
    int key = 20;
    
    cout<<"The Answer of Given Binary Search is "<<binarySearch(arr, n, key)<<endl<<endl<<endl;
    

    return 0;
}