#include<iostream>
#include<vector>

using namespace std;

int getSum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int i=5;  //Static Allocation [Stack]
    int *ptr=new int;  //Dynamic Allocation [Heap]
    // we can not assign a variable to heap memory as it returns its address
    // new <datatype> => Retruns address of memory block in heap so we can store it in a pointer and access it through that only
    *ptr=6;
    cout<<i<<","<<*ptr<<endl;
    delete ptr;  //Free &ptr in heap

    //Using dynamic memory allocation we can create array of variable size
    
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    //int a[n];   //Bad practice to pass a variable into size of static array who's value can be altered during run time 
    int *arr=new int[n];
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Variable Size array= ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    cout<<"Sum of all values= "<<getSum(arr,n)<<endl;
    delete []arr;  //Delete array in heap
    /*
    while(true){
        int i=5;     //On each iteration it will delete the variable i
    }
    //DANGER never run this code on local storage (either don't run or if u still want to run this code then use online compilers)
    while(true){  //DANGER
        int *ptr=new int;  //On each iteration it will delete the ptr variable but it will not delete heap address of variable and create new memory block on each iteration in heap and lead to system failure
    }
    */

    /*
    //2D Array in Dynamic Memory
    //2D array of order m*n
    int row;
    int col;
    cin>>row>>col;
     
    //Create 2D Array
    int **arr=new int*[row];  //Creates m rows having int * 
    for(int i=0;i<row;i++){
        arr[i]=new int[col]; //Creates n columns for each rows;
    }

    //Input of 2D Array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }


    //Output of 2D Array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }

    //Delete array
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    */



    return 0;
}