#include <stdio.h>
int main() {
    int m, sci, eng, sst, lang;
    printf("Enter maths marks:\n");
    scanf("%d", &m);
    printf("Enter sci marks:\n");
    scanf("%d", &sci);
    printf("Enter eng marks:\n");
    scanf("%d", &eng);
    printf("Enter sst marks:\n");
    scanf("%d", &sst);
    printf("Enter lang marks:\n");
    scanf("%d",&lang);
    int t_m = m + sci + eng + sst + lang;
    float avg_m = (m + sci + eng + sst + lang)*(0.2);
    float per = (t_m/500)*100;
    printf("Total marks: %d\n", t_m);
    printf("Average: %f\n", avg_m);
    printf("Percentage: %f\n", per, "%");
    return 0;
}
