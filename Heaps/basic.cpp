#include<iostream>
#include<vector>

using namespace std;


class Heap{
    private:

        int arr[100];
        int n;
    public:
        Heap(){
            arr[0]=-1;
            n=0;
        }

        void insert(int data){
            n++;
            int i=n;
            arr[i]=data;
            while(i>1){
                if(arr[i/2]>arr[i]){
                    return;
                }
                swap(arr[i], arr[i/2]);
                i/=2;
            }
        }

        int deleteRoot(){
            if(n<=0){
                cout<<"Heap is empty"<<endl;
                return -1;
            }
            int ans=arr[1];
            arr[1]=arr[n];
            n--;
            int i=1;
            while(i<n){
                if(i*2<n && arr[i]<arr[i*2]){
                    swap(arr[i], arr[i*2]);
                    i=i*2;
                }
                else if((i*2 +1) <n && arr[i]<arr[i*2 + 1]){
                    swap(arr[i], arr[i*2 + 1]);
                    i= i*2 + 1;
                }
                else{
                    break;
                }
            }
            return ans;
        }

        int size(){
            return n;
        }

        void print(){
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" , ";
            }
            cout<<endl;
        }
};




int main(){
    Heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    h.print();
    h.insert(70);
    h.print();
    cout<<h.deleteRoot()<<endl;
    h.print();

    return 0;
}












/* #include<iostream>
#include<vector>

using namespace std;
//Max Heap
class Heap{
    public:
        int arr[100];
        int size;

        Heap(){
            arr[0]=-1;
            size=0;
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" , ";
            }
            cout<<endl;
        }

        void insert(int val){
            size++;
            int index=size;
            arr[index]=val;
            while(index>1){
                int parent=index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent], arr[index]);
                    index=parent;
                }
                else{
                    return;
                }
            }
        }

        void del(){
            if(size<=0){
                cout<<"Heap is empty"<<endl;
                return;
            }
            arr[1]=arr[size];
            size--;
            int index=1;
            while(index<size){
                int leftChild = index*2;
                int rightChild = index*2 + 1;
                if(leftChild < size && arr[index]< arr[leftChild]){
                    swap(arr[index], arr[leftChild]);
                    index=leftChild;
                }
                else if(rightChild < size && arr[index]< arr[rightChild]){
                    swap(arr[index], arr[rightChild]);
                    index=rightChild;
                }
                else{
                    return;
                }
            }
        }

};



int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.del();
    h.del();
    h.print();

    return 0;
} */