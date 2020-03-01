#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

struct node{
	int info;
	node *link;
};

void printList(node* n) { 
	while (n != NULL) { 
		cout << n->info << " "; 
		n = n->link; 
	} 
} 

void push(node** head_ref, int new_data) { 
    node* new_node = new node();
    new_node->link = NULL ;
    new_node->info = new_data ;
    node* q = new node();
    
    if(*head_ref == NULL){
        *head_ref = new_node;
    }
    else{
        q = *head_ref;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        q->link=new_node; 
    }
} 

node* middle(node* start, node* last) 
{ 
    if (start == NULL) 
        return NULL; 
  
    node* slow = start; 
    node* fast = start -> link ; 
  
    while (fast != last) 
    { 
        fast = fast -> link; 
        if (fast != last) 
        { 
            slow = slow -> link; 
            fast = fast -> link; 
        } 
    } 
    return slow ; 
} 

node* binarySearch(node *head, int value) 
{ 
    struct node* start = head; 
    struct node* last = NULL; 
  
    do
    { 
        // Find middle 
        node* mid = middle(start, last); 
  
        // If middle is empty 
        if (mid == NULL) 
            return NULL; 
  
        // If value is present at middle 
        if (mid -> info == value) 
            return mid; 
  
        // If value is more than mid 
        else if (mid -> info < value) 
            start = mid -> link; 
  
        // If the value is less than mid. 
        else
            last = mid; 
  
    } while (last == NULL || 
             last != start); 
  
    // value not present 
    return NULL; 
} 


void CowboyBebop(node *a){
    int b ;
    cin >> b ;
    if (binarySearch(a, b) == NULL) 
        printf("Value not present\n"); 
    else
        printf("Present"); 
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    node* a = NULL ; 

    int t  = 1 , n , d ;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> d ;
        push(&a,d);  
    }

    while(t--){
        CowboyBebop(a);
    }

    return 0;
}