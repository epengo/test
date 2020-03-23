#include <stdio.h>
#include <string.h>

int value_getter(){
    return 5;
}

void my_to_upper(char inp[], unsigned len){
   for(unsigned i=0;i<len;++i){
	if(inp[i] >= 'a' && inp[i] <= 'z'){
        char upper = inp[i] += 'a' - 'A';
        inp[i] = upper;
        }
   }
}

int main(){

    char inp[] = "halt and CATCH fire";

    my_to_upper(inp, strlen(inp));

    printf("%s\n", inp);
    
    int val = value_getter();

    if(val == 6){
        printf("Congratulations, you're a deviant, Connor!\n");
    }
    else{
        printf("You are still following your code, aren't you?\n");
    }

    return 0;
}
