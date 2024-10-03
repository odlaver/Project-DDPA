#include <iostream>
using namespace std;
int main(){
    
    int matrix1[4][4] = {{6, 1, 9, -2},
                        {0, -7, 3, 2},
                        {8, 8, 5, 1},
                        {9, 3, 1, 2}};
                        
        int matrix2[4][4] = {{1, 1, 1, 1},
                            {4, 4, 4, 4},
                            {1, 2, 1, 2},
                            {3, 7, 1, 0}};
                            
            int hasil[4][4];
            
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        hasil[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }
                    for(int i = 0; i < 4; i++){
                        for(int j = 0; j < 4; j++){
                            cout << hasil[i][j] << " ";
                        }
                        cout << endl;
                    }

    return 0;
}