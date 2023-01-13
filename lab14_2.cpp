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

void showImage(const bool X[][M]){
    cout << "------------------------------------------------------------------------" << endl;
    for(int i=0; i<N; i++){
        cout << "|";
        for(int j=0; j<M;j++ ){
            if(X[i][j] == 1)
            cout<<"*";
            else cout << " ";
        }
        cout << "|\n";
    }
    cout << "------------------------------------------------------------------------" << endl;
}

void updateImage(bool X[][M],int s,int x,int y){
    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++ ){
            if(pow((pow(i-x,2)+pow(j-y,2)),0.5) <= s-1)
            X[i][j] = 1;
        }
        
    }
}