//1
// #include <stdio.h>
//  int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=7;j++){
//             if(j>=5-i && j<=i+3)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
//  }





//2
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=4;i++){
//         for(j=1;j<=7;j++){
//             if(j>=i && j<=8-i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//      }
//      return 0;
//  }




//4
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=4;i++){
//         int k=0;
//         for(j=1;j<=7;j++){
//             if(j>=5-i && j<=i+3){
//                 if(j<=4){
//                      k++;
//                 printf("%d",k);
//                 }
//                else{
//                  k--;
//               printf("%d",k);
//                 }
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//              }
//              return 0;
//  }



//5
// #include <stdio.h>
// int main(){
//      int i,j,k;
//      for(i=1;i<=4;i++){
//         k=65;
//         for(j=1;j<=7;j++){
//             if(j>=i && j<=8-i){
//                 printf("%c",k);
//                 k++;
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//      }
//      return 0;
// }




//6
// #include <stdio.h>
//  int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         k=64;
//         for(j=1;j<=7;j++){
//             if(j>=i && j<=8-i){
//              if(j<=4){
//                 k++;
//                 printf("%c",k);
//              }
//              else{
//                 k--;
//                 printf("%c",k);
//              }
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
//  }




//8
// #include <stdio.h>
//  int main(){
//      int i,j;
//      for(i=1;i<=4;i++){
//          for(j=1;j<=7;j++){
//             if(j<6-i || j>=3+i)
//                 printf("*");
//                 else
//                 printf(" ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }




//9
#include <stdio.h>
 int main(){
     int i,j,k;
     for(i=1;i<=4;i++){
        k=0;
         for(j=1;j<=7;j++){
            
            if(j<6-i || j>=3+i){//main condition
                if(j<=4){
                k++;
                printf("%d",k);
            }
            else{
               
                printf("%d",k);
                k--;
            }
            }
                else
                printf(" ");
                }
            
         printf("\n");
     }
     return 0;
 }




