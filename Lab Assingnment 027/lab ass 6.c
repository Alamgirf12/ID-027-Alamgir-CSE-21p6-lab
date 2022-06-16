#include<stdio.h>

int main(){
  int rows, columns, srchElement,i,j, count=0;
  printf("Enter the number of Rows and Columns: \n");
  scanf("%d %d", &rows, &columns);
  int array[rows][columns];

  printf("Enter %d elements: \n", (rows*columns));
  for( i=0; i<rows; i++){
    for(j=0; j<columns; j++){
      scanf("%d", &array[i][j]);

    }
  }
 printf("\nThe array is :\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }

  printf("Enter the element to get the position: \n");
  scanf("%d", &srchElement);

  for(i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == srchElement){

        printf("(The element is in the row number %d,  and column number %d) \n", i, j);
        count++;
      }
    }
  }

  if(count==0)
    printf("Not found \n");

  return 0;
}
