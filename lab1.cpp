#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

#define see(x) cout<<#x<<" "<<x<<endl;
#define A_COLS 512
#define A_ROWS 512
#define B_COLS 512
#define B_ROWS A_COLS
#define C_COLS B_COLS
#define C_ROWS A_ROWS


#ifndef BLOCK_I
    #define BLOCK_I 1
#endif
#ifndef BLOCK_J
    #define BLOCK_J 1
#endif
#ifndef BLOCK_K
    #define BLOCK_K 1
#endif


//#define TEST_REP 5



void mult(int max){
	typedef long long ll;
 	//int max=500;
 	ll matrix1[max][max];
 	ll matrix2[max][max];
 	ll matrix_result[max][max];

 	for (int i = 0; i < max; ++i){
 		for (int j = 0; j < max; ++j){
 			matrix1[i][j]=rand()%9;
 			matrix2[i][j]=rand()%9;
 		}
 	}
 	
 	//multiplicacion
 	for(int i=0;i<max; ++i){
	    for(int j=0;j<max;++j){
	        matrix_result[i][j]=0;
	        for(int k=0;k<max;++k){
	        	matrix_result[i][j]+=matrix1[i][k]*matrix2[k][j];
	        }
		}
 	}
    see("multiplicado");
}

void mult_bloques(){
	double A[A_ROWS][A_COLS], B[B_ROWS][B_COLS], C[C_ROWS][C_COLS];
    int i, j, k, i_bl, j_bl, k_bl;
    //llevar data
    for(i=0; i<A_ROWS; i++)
        for(j=0; j<A_COLS; j++)
            A[i][j] = exp(-fabs(i-j));
    
    for(i=0; i<B_ROWS; i++)
        for(j=0; j<B_COLS; j++)
            B[i][j] = exp(-fabs(i-j));
    
    
    // Set C[][] = 0 first 
    for(i=0; i<C_ROWS; i++)
        for(j=0; j<C_COLS; j++)
            C[i][j] = 0;
    
    

    cout<<"bloque1: "<<BLOCK_I<<" bloque2: "<<BLOCK_J<<" bloque3: "<<BLOCK_K<<endl;
    
    // Perform C = C + A*B 
    for(i=0; i<C_ROWS; i+= BLOCK_I)
        for(j=0; j<C_COLS; j+= BLOCK_J)
            for(k=0; k<A_COLS; k+= BLOCK_K)
                for(i_bl=i; i_bl<(i+BLOCK_I) && i_bl<C_ROWS; i_bl++)
                    for(j_bl=j; j_bl<(j+BLOCK_J) && j_bl<C_COLS; j_bl++)
                        for(k_bl=k; k_bl<(k+BLOCK_K) && k_bl<A_COLS; k_bl++)
                            C[i_bl][j_bl] += A[i_bl][k_bl] * B[k_bl][j_bl];
}




int main(void){
	//mult(500);    
   	mult_bloques();
    return 0;
}

