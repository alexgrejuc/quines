// make enough of these and you would have a dress
#include <stdio.h>
char t = '\'';
char q = '"';
char s = '\\';
char nl = '\n';
char* p1 = "int main(){printf(";
char* p2 = "// make enough of these and you would have a dress%c#include <stdio.h>%cchar t = %c%c%c%c;%cchar q = %c%c%c;%cchar s = %c%c%c%c;%cchar nl = %c%cn%c;%cchar* p1 = %c%s%c;%cchar* p2 = %c%s%c;%cchar* p3 = %c%s%c;%c%s%c%s%c%s%c";
char* p3 = ", nl, nl, t, s, t, t, nl, t, q, t, nl, t, s, s, t, nl, t, s, t, nl, q, p1, q, nl, q, p2, q, nl, q, p3, q, nl, p1, q, p2, q, p3, nl);}";
int main(){printf("// make enough of these and you would have a dress%c#include <stdio.h>%cchar t = %c%c%c%c;%cchar q = %c%c%c;%cchar s = %c%c%c%c;%cchar nl = %c%cn%c;%cchar* p1 = %c%s%c;%cchar* p2 = %c%s%c;%cchar* p3 = %c%s%c;%c%s%c%s%c%s%c", nl, nl, t, s, t, t, nl, t, q, t, nl, t, s, s, t, nl, t, s, t, nl, q, p1, q, nl, q, p2, q, nl, q, p3, q, nl, p1, q, p2, q, p3, nl);}
