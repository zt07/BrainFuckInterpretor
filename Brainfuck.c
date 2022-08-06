#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int eval(char *code){
    int ptr = 0;
    char tape[30000] = {0};
    for (int i = 0; i<strlen(code); i++){
        switch (code[i]){
            case '>':
				ptr++;
				break;
			case '<':
				ptr--;
				break;
            case '+':
                tape[ptr]++;
            case '-':
                tape[ptr]--;
            

        
        
        }

    }
}

int main (void){
    
}
