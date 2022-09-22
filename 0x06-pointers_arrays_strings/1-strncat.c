#include "main.h"                                                                                                                     

                                                                                                                                      

/**                                                                                                                                   

* _strncat - concatinates two string but add inputed number of bytes                                                                  

* @dest: string appended upon                                                                                                         

* @src: string to be complated at the ende of dest                                                                                    

* @n: integer parameter to compare index to                                                                                           

* Return: return new concatinated string                                                                                              

*/                                                                                                                                    

                                                                                                                                      

char *_strncat(char *dest, char *src, int n)                                                                                          

{                                                                                                                                     

        int index =0;                                                                                                                 

        int dest_len =0;                                                                                                              

                                                                                                                                      

        while (dest[index++])                                                                                                         

                dest_len++;                                                                                                           

                                                                                                                                      

        for (index = 0; src[index] && [index] < n; index++)                                                                           

                dest[dest_len++] = src[index];                                                                                        

                                                                                                                                      

        return (dest);                                                                                                                

}                                                                                                                                     

