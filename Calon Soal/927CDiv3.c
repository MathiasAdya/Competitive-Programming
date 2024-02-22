#include <stdio.h>

int main() {
    int tc;scanf("%d",&tc);
    while (tc--) {
        int n,m;scanf("%d %d",&n,&m);
        int a[n];for (int i=0;i<n;i++) scanf("%d",&a[i]);
        char s[n+1];scanf("%s",s); //bikin format input di soal
        int l=0, r=n-1;
        int idx[n];
        for (int i=0;i<n;i++) {
            if (s[i]=='L') idx[i]=l++;
            else idx[i]=r--;
        }
        int p=1;
        int res[n], it=0;
        for (int i=n-1;i>=0;i--) {
            p*=a[idx[i]];
            p%=m;
            res[it++]=p;
        }
        for (int i=n-1;i>=0;i--) {
            printf("%d ",res[i]);
        }
        printf("\n");
    }
    return 0;
}