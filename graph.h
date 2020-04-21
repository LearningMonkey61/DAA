#define MAX_VERTEX 100
#include <vector>
#pragma once 

class Graph{
   public :

     Graph() ;
     void PrintAdjacencyMatrix() ; 
     void PrintAdjacencyList();
     void DjikstraShortestPath(char s); 


   private :     
    
    int V ; 
    char VertexName[MAX_VERTEX] ; 
    int AdjacenyWeightedMatrix[MAX_VERTEX][MAX_VERTEX] = {0}  ; 
    std :: vector <std :: vector <int>> AdjacencyList ;

    void CreateAdjacencyList() ; 

};

Graph :: Graph(){
    std :: cin >> V ; 

    for(int i = 0 ; i < V ; i++){
        std :: cin >> VertexName[i] ; 
    }

    for(int i = 0 ; i < V ; i++){
        for(int j = 0 ; j < V ; j++){
            std :: cin >> AdjacenyWeightedMatrix[i][j] ; 
        }
    }

    CreateAdjacencyList() ; 
}

void Graph :: PrintAdjacencyMatrix(){

    std :: cout << "*| " ;
    for(int i = 0 ; i < V ; i++){
        std :: cout  <<  VertexName[i]  << " "; 
    }
    std :: cout << std :: endl ;
    
    for(int i = 0 ; i < V ; i++){
        std :: cout << VertexName[i] << "| " ; 
        for(int j = 0 ; j < V ; j++){
            std :: cout <<  AdjacenyWeightedMatrix[i][j] << " "; 
        }
        std :: cout << std :: endl ;
    }

}

void Graph :: CreateAdjacencyList(){

    for(int i = 0 ; i < V ; i++){
        std :: vector <int> v ; 
        
        for(int j = 0 ; j < V ; j++ ){
            if(AdjacenyWeightedMatrix[i][j]){
                v.push_back(j) ;
            }
        } 
        AdjacencyList.push_back(v) ;
    }
} 

void Graph :: PrintAdjacencyList(){
    
    for(int i = 0 ; i < V ; i++){
        std :: cout << VertexName[i] ; 
        for(int j = 0 ; j < AdjacencyList[i].size() ; j++){
            std :: cout << " -> " << VertexName[AdjacencyList[i][j]] ; 
        }
        std :: cout << std :: endl ;
    }

}

void Graph :: DjikstraShortestPath(char s){
    int source = -1 ; 
    for(int i = 0 ; i < V ; i++){
        if(s == VertexName[i]){
            source = i ;
            break ;  
        }
    }
    if(source == -1 ){
        std :: cout << "NO VERTEX WITH NAME " << s << " EXISTS" << std ::  endl ; 
        return ;
    }

    int D[V] ;
    memset(D,1000000,sizeof(D)) ;  
    int P[V] ; 
    memset(P,-1,sizeof(P)) ;  
    D[source] = 0 ;
    
    std :: priority_queue <std :: pair<int,int>, std :: vector< std :: pair<int,int>>, std :: greater<std :: pair<int,int>>> q; 
    q.push({D[source],source}) ; 

    while (!q.empty()){
        int p = q.top().second ; 
        q.pop() ;
        for (auto v : AdjacencyList[p]){
            if(D[v] > D[p] + AdjacenyWeightedMatrix[p][v]){
                D[v] = D[p]+ AdjacenyWeightedMatrix[p][v] ; 
                P[v] = p ; 
                q.push({D[v],v}) ; 
            }
        }
    }

    
    for(int i = 0 ; i < V ; i++){
       std ::  cout << VertexName[i]  << " " << D[i] << " " << VertexName[P[i]] << std :: endl ;  
    }

}
