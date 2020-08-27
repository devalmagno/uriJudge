#include <stdio.h>

int main() {
    int N, i, M, PAR;
    int E[61], D[61];
    char Lado[5];

    while (scanf("%d", &N) != EOF) {
        PAR = 0;

        if (N == 0) break;

        for (i = 30; i < 61; i++) {
            E[i] = 0;
            D[i] = 0;
        }

        for (i = 0; i < N; i++) {
            scanf("%d %s", &M, Lado);

            if(Lado[0] == 'E') E[M]++;
            else D[M]++;            
        }

        for (i = 30; i < 61; i++) {
            if (E[i] != 0 && D[i] != 0) {
                if (E[i] < D[i]) PAR = PAR + E[i];
                else PAR = PAR + D[i];
            }
        }

        printf("%d\n", PAR);
    }

    return 0;
}