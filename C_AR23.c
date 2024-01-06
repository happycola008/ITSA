#include <stdio.h>
#include <string.h>

int isstring(char s[], char t[]) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    for (int i=0;i<=len_t - len_s;i++) {
        int j;
        for (j=0;j<len_s;j++) {
            if (t[i + j]!=s[j]) break;
        }
        if (j == len_s) return 1;
    }
    return 0;
}

int main() {
    char s[105], t[105];
    scanf("%s", s);
    scanf("%s", t);
    
    if (isstring(s, t))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
