#define N 5
    int nota[N], soma = 0;
    int nota[5];

for (int i = 0; i < N; i++){
printf("Nota %d: ", i + 1);
scanf("%d", &nota[i]);
soma += nota[i];
    }
printf("Media: %.1f\n", (float)soma / N);


