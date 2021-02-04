#include <iostream>
using namespace std;
class MaxHeap{
public:
    int Size;
    int Cap;
    int* data;
public:
MaxHeap(int n){
    this->Cap = n;
    data = new int[this->Cap];
}

int Parrent(int i){return (i-1)/2;};
int LeftChild(int i){ return (2*i)+1;};
int RightChild(int i){ return (2*i)+2;};


void HeapifyUP(int i){
    int parrentIndex = Parrent(i);
    if(i == 0){
        return;
    }
    else{
    if(data[i] > data[parrentIndex]){
        swap(data[i],data[parrentIndex]);
    }
    HeapifyUP(parrentIndex);
    }
}

void HeapifyDown(int i){
    int LefChildIndex = LeftChild(i);
    int RightChildIndex = RightChild(i);

    int bigger = (this->data[LefChildIndex] >= this->data[RightChildIndex]) ? LefChildIndex : RightChildIndex;
    if(this->data[i] < this->data[bigger]){
        swap(this->data[i],this->data[bigger]);
        HeapifyDown(bigger);
    }
}

void Insert(int val){
    if(this->Size >= this->Cap){
        cout<<"Heap je pun!"<<endl;
    }
    this->Size++;
    this->data[Size] = val;
    this->HeapifyUP(this->Size);
}

void Remove(int i){
    this->data[i] = this->data[Size-1];
    HeapifyDown(i);
    this->Size--;
}

};