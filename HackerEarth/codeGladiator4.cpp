#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

typedef struct structurePoint{
    int x;
    int y;
}structPoint;

/*int stringToInt(char* str){
    char* ptr1 = NULL;
    char*temp = NULL;
    char* ptr2 = NULL;
    int i=0;
    int num=0;
    while( *(ptr2) != '\0'){
        temp = ptr2;
        ptr2++;
    }

    ptr2 = temp;
    while( ptr2 != ptr1){
        num += (*ptr2) * pow(10,i);
        i++;
        ptr2--;
    }

    i++;
    num += (*ptr1) * pow(10,i);
    return num;
}*/

int stringToInt(char* a){
	 int c, sign, offset, n;

  if (a[0] == '-') {  // Handle negative integers
    sign = -1;
  }

  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) {
    n = -n;
  }

  return n;

}


int getColinearPoint(int in1,int in2,int in3,char* in4){
    int px=0,py=0,i,j,k,p=0,flag=0,best=2,count=2,y=0;
    char *ptr = in4;
    char *ptr1;
    char temp[10];
    char* ptr4=NULL;
    printf("Len : %d  Val : %s\n",in3,in4);
    structPoint point[in3];
    while(*ptr != '\0'){
        ptr4 = ptr++;
        if(*ptr == '('){
            printf("In 1 : %c\n",*ptr);
           }
        else if( *ptr==')' && (*(ptr4) == '\0' || (*(ptr4)==',' || *(ptr4)==')')) ){
            printf("In 2 : %c\n",*ptr);
            point[p].x=px;
            point[p].y=py;
            p++;
            printf("Exit 2\n");
        }
        else{
            printf("In 4 : %c\n",*ptr);
            y=0;
            while( (*ptr != ',') || (*ptr !=')')){
                printf("In 4 / 1 : %c y: %d Temp : %s\n",*ptr,y,temp);
                temp[y] = *ptr;
                y++;
                ptr = ptr++;
            }
            temp[y]='\0';
            if(flag == 0){
                printf("In 4 /2\n");
                px = stringToInt(temp);
                printf("px: %d ",px);
                flag=1;
            }
            else if(flag == 1){
                printf("In 4/4\n");
                py=stringToInt(temp);
                printf(" py: %d\n",py);
                flag = 0;

            }
            printf("Exit 4\n");
        }
        ptr = ptr++;
    }

    for(i=0;i<in3;i++)
        printf("%d %d\n",point[i].x,point[i].y);


    return 5;
}

int main(){
    char* str="((2,1),(6,6),(4,2),(2,5),(2,6),(2,7),(3,4),(6,1),(6,2),(2,3),(6,3),(6,4),(6,5),(6,7))";
    printf("%d",getColinearPoint(6,7,14,str));

    /*char *str1 = "1245";
    printf("string : %s\n",str1);
    int x = stringToInt(str1);
    printf("%d",x);*/

getchar();
return 0;
}
