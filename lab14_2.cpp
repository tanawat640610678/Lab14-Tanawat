#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool D[][M]){

    for(int a = 0 ; a < 72 ; a++) cout << "-";
       cout << "\n";

    for(int b = 0 ; b < N ; b++ ){
        cout << "|";

        for(int c = 0 ; c < M ; c++){
            
            if( D[b][c]){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "|" << "\n";
    }
    for(int i = 0; i<72 ;i++) cout << "-" ;
      cout << "\n";
}   

void updateImage(bool P[][M],int s,int u,int v){

       for(int j = 0 ; j < N ;j++){

           for(int k = 0 ; k < M ; k++){

               if( s >= 1 + sqrt(pow(j-u,2)+pow(k-v,2))){

                   P[j][k] = 1;
               }
           }
       }
}