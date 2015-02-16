//
//  main.c
//  RevisionC
//
//  Created by David on 1/28/15.
//  Copyright (c) 2015 David. All rights reserved.
//

#include <stdio.h>

int multMatrix (int compA[][3], int compB[][3]);

int main(int argc, const char * argv[]) {
   // insert code here...
   int MATRA[3][3], MATRB[3][3], n=0, m=9;
   
   for( int i = 0; i < 3; i++){
      for( int j=0; j<3; j++){
         MATRA[i][j] = ++n;
         MATRB[i][j] = m--;
      }
   }
   
   for( int i = 0; i < 3; i++){
      for( int j=0; j<3; j++){
         printf("%d ",MATRA[i][j]);
      }
   }
   
         printf("\n");
   multMatrix(MATRA, MATRB);
   
    return 0;
}


int multMatrix (int compA[][3], int compB[][3])
{
   int ResMatr[3][3];
   int temp=0;
   
   for( int n = 0; n<3; n++){
      for( int i = 0; i < 3; i++){
         for( int j=0; j<3; j++){
            temp+=compA[n][j]*(compB[j][i]);
         }
         ResMatr[n][i]=temp;
         temp=0;
         printf("%d ",ResMatr[n][i]);
      }
    printf("\n");
   }
   return 0;
}