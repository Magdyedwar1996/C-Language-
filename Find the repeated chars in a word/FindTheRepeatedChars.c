#include <stdio.h>
int main(void)
{
    int i = 0 , Counter = 0 , Flag = 0 , m = 0 , j = 0 , k = 0  ;
    char Word[50];   // this array to store the entered word
    char RepeatedCharacters[50]; // this array to store the repeated chars

    scanf("%s",&Word);
    // This while to get the length of the word entered
    while(Word[i] != '\0')
        {i++ ;}

    for(j = 0 ; j < i ; j++)
        {
            while( RepeatedCharacters[m] != '\0' )
                {
                    if( RepeatedCharacters[m] == Word[j]  )
                        {
                            Flag = 1 ;
                            m = 0 ;
                            break ;

                        }
                        m++ ;
                }

                if(Flag != 1 )
                    {

                        for(k = j + 1 ; k < i ; k++ )
                            {
                                if(Word[j] == Word[k])
                                    {
                                         while( RepeatedCharacters[m] != '\0' )
                                            {
                                                m++;
                                            }
                                            RepeatedCharacters[m] = Word[j];
                                            Counter++;
                                            m = 0 ;
                                            break;

                                    }
                            }
                    }
                Flag = 0 ;
        }
    printf("%d",Counter);


    return 0 ;
}