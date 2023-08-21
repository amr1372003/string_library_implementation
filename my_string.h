#ifndef _MY_STRING_H_
    #define _MY_STRING_H_
    void *my_memset(void *str, unsigned char c, unsigned int n);
    void *my_memcpy(void *dest, const void * src, unsigned int n);
    int my_memcmp(const void *str1, const void *str2, unsigned int n);
    void *my_memchr(const void *str, unsigned char character, unsigned int n);
    char *mmy_strapend(char *dest, const char *src);
    char *my_strapendn(char *dest, const char *src, unsigned int n);
    unsigned int my_strspn(const char *str1, const char *str2);
    unsigned int my_strlen(const char *str);
    char *my_strcpy(char *dest, const char *src);
    char *my_strpbrk(const char *scaned, const char *contain);
    char *my_strtok(char *str, const char *delim);
    unsigned int my_strxfrm(char *dest, const char *src, unsigned int n);
    char *my_strstr(const char *haystack, const char *needle);
    void *my_memmove(void *str1, const void *str2, unsigned int n);
    unsigned char *my_strchr(const char *str, unsigned char c);
    unsigned int my_strcmp(const char *str1, const char *str2);
    unsigned int my_strncmp(const char *str1, const char *str2, unsigned int n);
    unsigned char *my_strncpy(char *dest, const char *src, unsigned int n);
    unsigned int my_strcspn(const char *str1, const char *str2);
    unsigned char *my_strrchr(const char *str, const unsigned char c);
#endif
