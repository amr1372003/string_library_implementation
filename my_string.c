#include <stdio.h>
#include "my_string.h"

int main(){
   
}


void *my_memset(void *str, unsigned char c, unsigned int n){
    unsigned char *temp = str;
    if (NULL == str){
        printf("your pointer points to NULL");
    }
    else{
        while (n--)
        {
            *temp++ = c;
        }
    }
    return str;
}


void *my_memcpy(void *dest, const void *src, unsigned int n){
    unsigned char *temp_dest = dest;
    unsigned char *temp_src = (unsigned char *)src;
    if ((NULL == dest ) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (n--){
            *temp_dest++ = *temp_src++;       
        }
    }
    return dest;
}


int my_memcmp(const void *str1, const void *str2, unsigned int n){
    unsigned char *temp_str1 = (unsigned char *)str1;
    unsigned char *temp_str2 = (unsigned char *)str2;
    char val_ret = 0;
    if ((NULL == str1 ) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else{
        if (str1 == str2){
            val_ret = 0;
        }
        else {
            while (n)
            {
                if (*temp_str1 != *temp_str2){
                    val_ret = (*temp_str1 < *temp_str2) ? -1 : 1;
                    break;
                }
                else{
                    temp_str1++;
                    temp_str2++;
                    n--;
                }
            }   
        }
    }
    return val_ret;
}


void *my_memchr(const void *str, unsigned char character, unsigned int n){
    unsigned char *temp = (unsigned char *)str;
    unsigned char *val_ret;
    if (NULL == str){
        printf("your pointer points to NULL");
    }
    else{
        while (n--){
            if (*temp == character){
                val_ret = temp;
                break;
            }
            else{
                temp++;
            }
        }
    }
    return val_ret;
}


char *my_strapend(char *dest, const char *src){
    unsigned char *temp_dest = dest;
    unsigned char *temp_src = (unsigned char *)src;
    if ((NULL == dest) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_dest){
            temp_dest++;
        }
        while (*temp_src){
            *temp_dest++ = *temp_src++;
        }
    }
    return dest;
}


char *my_strapendn(char *dest, const char *src, unsigned int n){
    unsigned char *temp_dest = dest;
    unsigned char *temp_src = (unsigned char *)src;
    if ((NULL == dest) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_dest){
            temp_dest++;
        }
        while (n--){
            *temp_dest++ = *temp_src++;
        }
    }
    return dest;
}


unsigned int my_strspn(const char *str1, const char *str2){
    unsigned char *temp_str1 = (unsigned char *)str1;
    unsigned char *temp_str2 = (unsigned char *)str2;
    unsigned int counter = 0;
    if ((NULL == str1) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_str2 && *temp_str1){
            if (*temp_str1 == *temp_str2)
            {
                counter++;
                temp_str1++;
            }
            temp_str2++;
        }      
    }
    return counter;
}


unsigned int my_strlen(const char *str){
    unsigned char *temp = (unsigned char *)str;
    unsigned int count =  0;
    if (NULL == str){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp){
            count++;
            temp++;
        }
    }
    return count;
}


char *my_strcpy(char *dest, const char *src){
    unsigned char *temp_dest = dest;
    unsigned char *temp_scr =  (unsigned char *)src;
    if ((NULL == dest) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_scr){
            *temp_dest++ = *temp_scr++;
        }
    }
    return dest;
}


char *my_strpbrk(const char *scaned, const char *contain){
    unsigned char *temp_str1 = (unsigned char *)scaned;
    unsigned char *temp_str2 =  (unsigned char *)contain;
    char *value = NULL;
    if ((NULL == scaned) || (NULL == contain)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_str2){
            while (*temp_str1){
                if (*temp_str1 == *temp_str2){
                    value = temp_str1;
                    break;
                }
                temp_str1++;
            }
            temp_str2++;
        }
    }
    return value;
}


char *my_strtok(char *str, const char *delim){
    unsigned char *temp_str = str;
    char *value;
    static char *ini_value = NULL ;
    if ((NULL == str)){
        while (*ini_value){
            ini_value++;
        }
        ini_value++;
    }
    else{
        ini_value = value;
        while (*temp_str){
            if (*temp_str == *delim){
                *value = '\0';
            }
            else{
                *value = *temp_str;
            }
            temp_str++;
            value++;
        }
        *value = '\0';
        value++;
        *value = '\0';
    }
    return ini_value;
}


unsigned int my_strxfrm(char *dest, const char *src, unsigned int n){
    unsigned char *temp_dest = dest;
    unsigned char *temp_scr =  (char *)src;
    char len = 0;
    if ((NULL == dest) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (n-- && *temp_scr){
            *temp_dest++ = *temp_scr++;
            len++;
        }
    }
    return len;
}


char *my_strstr(const char *haystack, const char *needle){
    char *temp_haystack = (char *) haystack;
    char *temp_needle =  (char *) needle;
    char *ini = NULL;
    int len = my_strlen(needle);
    if ('\0' == *needle){
        ini = temp_haystack;
    }
    if ((NULL == haystack) || (NULL == needle)){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_haystack){
            while ((*temp_haystack == *temp_needle) && (*temp_needle)){             
                temp_needle++;
                temp_haystack++;
            }
            if (!*temp_needle){
                ini = temp_haystack - len;
                break;
            }
            temp_haystack++;
        }
    }
    return ini;
}


void *my_memmove(void *str1, const void *str2, unsigned int n){
    unsigned char *temp_str1 = str1;
    const unsigned char *temp_str2 = (const unsigned char *)str2;
    if ((NULL == str1) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else{
        while (n--){
            *temp_str1++ = *temp_str2++;
        }
    }
    return str1;
}


unsigned char *my_strchr(const char *str, unsigned char c){
    unsigned char *temp_str = (unsigned char *)str;
    unsigned char *val_ret = NULL;
    if (NULL == str){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_str){
            if (*temp_str == c){
                val_ret = temp_str;
                break;
            }
            else{
                temp_str++;
            }
        }
    }
    return val_ret;
}


unsigned int my_strcmp(const char *str1, const char *str2){
    unsigned char *temp_str1 = (unsigned char *)str1;
    unsigned char *temp_str2 = (unsigned char *)str2;
    char val_ret = 0;
    if ((NULL == str1 ) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else{
        while (*str1 && *str2)
        {
            if (*temp_str1 != *temp_str2){
                val_ret = (*temp_str1 < *temp_str2) ? -1 : 1;
                break;
            }
            temp_str1++;
            temp_str2++;
        }
        if (!(*temp_str1 && *temp_str2)){
            val_ret = 0;
        }
        else{
            val_ret = (*str1 == '\0') ? -1 : 1;
        }
    }
    return val_ret;
}


unsigned int my_strncmp(const char *str1, const char *str2, unsigned int n){
    unsigned char *temp_str1 = (unsigned char *)str1;
    unsigned char *temp_str2 = (unsigned char *)str2;
    char val_ret = 0;
    if ((NULL == str1 ) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else if(n){
        while (n--)
        {
            if (*temp_str1 != *temp_str2){
                val_ret = (*temp_str1 < *temp_str2) ? -1 : 1;
                break;
            }
            temp_str1++;
            temp_str2++;
        }
    }
    return val_ret;
}


unsigned char *my_strncpy(char *dest, const char *src, unsigned int n){
    unsigned char *temp_dest = dest;
    unsigned char *temp_src = (unsigned char *)src;
    if ((NULL == dest ) || (NULL == src)){
        printf("your pointer points to NULL");
    }
    else{
        while (n--){
            *temp_dest++ = *temp_src++;       
        }
    }
    return dest;
}


unsigned int my_strcspn(const char *str1, const char *str2){
    unsigned char *temp_str1 = (unsigned char *)str1;
    unsigned char *temp_str2 = (unsigned char *)str2;
    unsigned int counter = 0;
    if ((NULL == str1 ) || (NULL == str2)){
        printf("your pointer points to NULL");
    }
    else{
         while (*temp_str1){
            while (*temp_str2){
                if (*temp_str1 == *temp_str2){
                    return counter;
                }
                temp_str2++;
            }
            counter++;
            temp_str1++;
            temp_str2 = (unsigned char *)str2;
        }      
    }
    return counter;
}


unsigned char *my_strrchr(const char *str, const unsigned char c){
    unsigned char *temp_str = (unsigned char *)str;
    unsigned char *val_ret = NULL;
    if (NULL == str){
        printf("your pointer points to NULL");
    }
    else{
        while (*temp_str){
            if (*temp_str == c){
                val_ret = temp_str;
            }
            temp_str++;
        }
    }
    return val_ret;
}
