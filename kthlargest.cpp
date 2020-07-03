#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void swap(int *x, int *y);
class MaxHeap
{
    int *harr; 
    int capacity; 
    int heap_size; 
public:
    MaxHeap(int a[], int size); // Constructor
    void maxHeapify(int i);  //To maxHeapify subtree rooted with index i
    int parent(int i) { return (i-1)/2; }
    int left(int i) { return (2*i + 1); }
    int right(int i) { return (2*i + 2); }
    int extractMax();  // extracts root (maximum) element
    int getMax() { return harr[0]; } // Returns maximum
    void replaceMax(int x) { harr[0] = x;  maxHeapify(0); }
};
MaxHeap::MaxHeap(int a[], int size)
{
    heap_size = size;
    harr = a;  // store address of array
    int i = (heap_size - 1)/2;
    while (i >= 0)
    {
        maxHeapify(i);
        i--;
    }
}

int MaxHeap::extractMax()
{
    if (heap_size == 0)
        return INT_MAX;
    int root = harr[0];
    if (heap_size > 1)
    {
        harr[0] = harr[heap_size-1];
        maxHeapify(0);
    }
    heap_size--;
    return root;
}
void MaxHeap::maxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l < heap_size && harr[l] > harr[i])
        largest = l;
    if (r < heap_size && harr[r] > harr[largest])
        largest = r;
    if (largest != i)
    {
        swap(&harr[i], &harr[largest]);
        maxHeapify(largest);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int kthSmallest(int arr[], int n, int k)
{
    MaxHeap mh(arr, k);
    for (int i=k; i<n; i++)
        if (arr[i] < mh.getMax())
           mh.replaceMax(arr[i]);
    return mh.getMax();
}

void CowboyBebop(){
    int n ; 
    cin >> n ; 
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ; 
    }
    int k ;
    cin >> k ;
    cout << kthSmallest(a,n,k) << endl ;

}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t = 1;
    //  cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}