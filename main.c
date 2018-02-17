#include <stdio.h>

const char dvorakAlphabet[] = "',.pyfgcrl/=\aoeuidhtns-;qjkxbmwvz\"<>PYFGCRL?+|AOEUIDHTNS_:QJKXBMWVZ";
const char qwertyAlphabet[] = "qwertyuiop[]\asdfghjkl;'zxcvbnm,./QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";

char qwerty_to_dvorak(char dvorakLetter);

int main(int argc, const char * argv[]) {
    for(;;){
    printf("Enter a DVORAK string of characters and I will return the qwerty equivelint.\n");
    char userInput[100];
    scanf("%s", userInput);
    int x = 0;
    while(userInput[x] != '\0')
    {
        userInput[x] = qwerty_to_dvorak(userInput[x]);
        x++;
    }
    
    printf("Your QWERTY equivilent is: \n%s\n", userInput);
    }
}

char qwerty_to_dvorak(char dvorakLetter)
{
    char convertedLetter;
    
    int count = 0;
    for(count = 0; ; count++)
    {
        if(dvorakLetter >= '0' && dvorakLetter <= '9')
        {
        if(dvorakLetter == dvorakAlphabet[count])
        {
            convertedLetter = qwertyAlphabet[count];
            break;
        }
        else
        {
            return dvorakLetter;
        }
        }
    }
    return convertedLetter;
}


