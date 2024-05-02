#include <iostream>
#include <string>
#include <limits>
#define Max_cities 50
using namespace std;

int main(){
    int n;
    int adj_matrix [Max_cities][Max_cities]={0};
    cout<<"Enter no. of cities :"<<endl;
    cin>>n;

    string city[Max_cities];
    for (int i=0;i<n;i++){
    cout<<"Enter name of city "<<i+1<<endl;
    cin>>city[i];

    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"Enter time required to travel from city "<<city[i]<<" to city "<<city[j]<<" : "<<endl;
            cin>>adj_matrix[i][j];
            adj_matrix[j][i]=adj_matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<city[i]<<"\t";
    }
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<city[i];
        for (int j = 0; j < n; j++)
        {
            cout<<"\t"<<adj_matrix[i][j]<<"\t";
        }
        
    }
    
    return 0;


}