#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    int size=0;
    int **scores = new int*[size];
    public:
    Student(int size){
        int **scores = new int*[size];
        for (int i = 0; i < size; i++)
        {
            scores[i] = new int[5];
        }
        
    }

    void input(){
        for(int i=0;i<size;i++){
            for(int j=0;j<5;j++){
                cin >> scores[i][j];
            }
        }
    }

    int calculateTotalScore(){
        int greaterScores=0;
        for(int i = 1;i < 5;i++){
            for(int j=0; j < size; j++){
                if(scores[0][j] < scores[i][j]){
                    greaterScores++;
                }
            }
            
        }   
    }

    void print(){
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << scores[i][j] << endl;
            }
            
        }
        
    }
};

int main() {
    int size=0;
    cin >> size;
    Student temp(size);

    temp.input();
    


}