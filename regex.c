#include <stdio.h>
#include <string.h>

int main(void) {
    const char *search="grey";
    const char *subject="one grey cloud";
    int subject_len=(int)strlen(subject);
    int search_len=(int)strlen(search);
    printf("String=%s\n",subject);
    for(int i=0;i< subject_len;i++){
        for(int j=0;j<search_len;j++){
            if(subject[i+j] == search[j]){
                if(j==search_len-1){
                    printf("Found String '");
                    for (int l=0;l<search_len;l++){
                        printf("%c",subject[i+l]);
                    }
                    printf("' at i=%d len%d\n",i,search_len);
                    i+=search_len-1;
                }
            }
            else {
                    break;
            }
        }
    }
}




