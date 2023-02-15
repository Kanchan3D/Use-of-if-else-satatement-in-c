#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int l,n,w,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d %d",&w,&h);
        if(w<l || h<l){
            printf("UPLOAD ANOTHER\n");
        }
        else if(w>l && w>l){
            if(w==h){printf("ACCEPTED\n");}
            else{printf("CROP IT\n");}
        }
        else if(w==h){
            printf("ACCEPTED\n");
        }
    }
    
    return 0;
}
