#include <stdio.h>
int main()
{
    int N,n,m;
    scanf("%d",&N);
    
    for (int i = 0; i < N; i++){
        scanf("%d",&n);
        scanf("%d",&m);
        int count = 0;
        int num[n];

        for (int j = 0; j < n; j++){
            scanf("%d",&num[j]);
        }

        for (int a = 0; a < n - 1; a++){
            for (int b = a + 1; b < n ; b++){
                if ( (num[a]*num[b] <= m) && (num[a]*num[b] != 0) && (m % (num[a]*num[b]) == 0) ){
                    int check = m / (num[a]*num[b]);
                    for (int c = 0; c < n; c++){
                        if (c == a || c == b) continue;
                        else if (num[c] == check) count++;
                    }
                }
            }
        }
        int result = count / 3;
        printf("%d\n",result);
    }
    return 0;
}
