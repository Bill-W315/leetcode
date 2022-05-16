void reverse(int b, int e, char *s){
    //利用XOR做int swap
    while(b < e) {
        s[b] = s[b] ^ s[e];
        s[e] = s[b] ^ s[e];
        s[b] = s[b] ^ s[e];
        b++;
        e--;
    }
}
/*
    遇到一個詞做一次反轉，直到\0
*/
char* reverseWords(char* s) {
    int  s_len = strlen(s), index = 0;
    for(int i = 0; i <= s_len; i++) {
        if((s[i] == ' ') || (s[i] == '\0')){
            reverse(index, i - 1, s);
            //跳過空白
            index = i + 1;
        }
    }
    return s;
}