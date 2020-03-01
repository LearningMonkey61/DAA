#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
struct node{
	int info;
	node *link;
};

void split(node* source, node** a, node** b){
    node* adv2; 
	node* adv1; 
	adv1 = source; 
	adv2 = source->link; 
	while (adv2 != NULL) { 
		adv2 = adv2->link; 
		if (adv2 != NULL) { 
			adv1 = adv1->link; 
			adv2 = adv2->link; 
		} 
	} 
	*a = source ; 
	*b = adv1->link ; 
	adv1->link = NULL; 
}

node* Merge(node* a, node* b) 
{ 
	node* result = NULL; 
	if (a == NULL) 
		return (b); 
	else if (b == NULL) 
		return (a); 
	if (a->info <= b->info) { 
		result = a; 
		result->link = Merge(a->link, b); 
	} 
	else { 
		result = b; 
		result->link = Merge(a, b->link); 
	} 
	return (result); 
} 

void CowboyBebop(node** headNode){
    node* head = *headNode ; 
    node *a , *b ; 
    if((head == NULL) || (head->link == NULL)){
        return ; 
    }
    split(head,&a,&b);
    CowboyBebop(&a);
    CowboyBebop(&b);
    *headNode = Merge(a,b);
}
void printList(node* n) 
{ 
	while (n != NULL) { 
		cout << n->info << " "; 
		n = n->link; 
	} 
} 

void push(node** head_ref, int new_data) 
{ 
	node* new_node = new node(); 
	new_node->info = new_data; 
	new_node->link = (*head_ref); 
	(*head_ref) = new_node; 
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
    
    // create a linked list 

    // cowboybebop is my def mergesort()
    while(t--){
        CowboyBebop(&a);
    }

    printList(a) ; 
    return 0;
}

