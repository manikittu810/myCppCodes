#include "bits/stdc++.h"
using namespace std;

void swap(int *x,int *y);

class minHeap{
    int *ptr;
    int heapCapacity;
    int heapSize;

    public:

    minHeap(int heapCapacity);

    void minHeapify(int );

    int parentRoot(int i)
    {
        return (i/2)-1;
    }
    int left(int i)
    {
        return (2*i+1);
    }
    
    int right(int i)
    {
        return (2*i+2);
    }

    int extractMin();

    void decreaseKey(int i,int val);

    int getMin()
    {
        return ptr[0];
    }

    void deleteKey(int i);

    void insertKey(int k);

};
minHeap:: minHeap(int cap)
{
    heapSize=0;
    heapCapacity=cap;
    ptr=new int[cap];
}

void minHeap::insertKey(int k)
{
    if(heapSize==heapCapacity)
    {
        cout<<endl<<"could not insert any key : OverFlow\n";
        return ;
    }
    heapSize++;
    int i= heapSize-1;
    ptr[i]=k;
    while(i>0 && ptr[i]< ptr[parentRoot(i)])
    {
        swap(&ptr[i],&ptr[parentRoot(i)]);
        i=parentRoot(i);
    }
}

void minHeap :: decreaseKey(int i,int val){
    ptr[i]=val;
    while(i>0 && ptr[i]<ptr[parentRoot(i)])
    {
        swap(&ptr[i],&ptr[parentRoot(i)]);
        i=parentRoot(i);
    }
}

int minHeap::extractMin(){
    if(heapSize<=0)
    {
        return INT_MAX;
    }
    if(heapSize==1)
    {
        heapSize--;
        return ptr[0];
    }
int min=ptr[0];
ptr[0]=heapSize--;
minHeapify(0);
return min;
}

void minHeap :: deleteKey(int i)
{
    decreaseKey(i,INT_MIN);
    extractMin();
}

void minHeap :: minHeapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heapSize && ptr[i] > ptr[l])
        smallest=l;
    if(r<heapSize && ptr[r] < ptr[smallest])
        smallest=r;
    if(smallest!=i)
    {
        swap(&ptr[i],&ptr[smallest]);
        minHeapify(smallest);
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    minHeap obj(10);
    obj.insertKey(5);
    obj.insertKey(2);
    obj.insertKey(3);
    obj.insertKey(8);
    obj.insertKey(7);
    obj.insertKey(6);
    obj.insertKey(4);
    obj.insertKey(15);
    obj.insertKey(20);
    cout<<obj.getMin()<<"   this is getMin()\n";
    cout<<obj.extractMin()<<"   this is extract min\n";
    obj.decreaseKey(5,1);
    cout<<obj.getMin()<<"   this getmin after decrease key\n";
    
    return 0;
}