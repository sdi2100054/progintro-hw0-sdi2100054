#include <stdio.h>

int main() {
    int val,space=0, left_flag=0, right_flag=0;
    float left=0, right=0;
    printf("Please enter the cost of going left:");
    while ((val = getchar())!=EOF)  {
        if(val == ' ' || '\n' || '\t' ){
            if ( space == 0){
            space = 1;
            printf("\nPlease enter the cost of going right:");
            continue;
            } else if (right_flag == 1){
                break;
            }
        }
        
        if(space==0){
        left_flag=1;
        left = left * 10 + val;
        continue;
        } else {
            right_flag=1;
            right = right * 10 + val;
            continue;
        }
    }
    space =0;
    if (left_flag == 0) {
        return 0;
    } else if(right_flag == 0)  {
        return 1;
    }
        left_flag=right_flag=0;
    

    if (left >= right) {
        fprintf( stdout, "Go left.\n" );
    } else {
        fprintf( stdout, "Go right.\n" );
    }
    return 0;
}