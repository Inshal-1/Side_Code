#include <stdio.h>
#include <conio.h>

typedef struct subject {
    int attempted, correct;
} subject;

float cal_entry() {
    subject adv_math, basic_math, eng, IQ;
    printf("\n%sEnter attempted questions for Advanced Math: ", "\033[1;36m");
    scanf("%d", &adv_math.attempted);
    printf("%sEnter correct questions for Advanced Math: ", "\033[1;36m");
    scanf("%d", &adv_math.correct);

    printf("\n%sEnter attempted questions for Basic Math: ", "\033[1;36m");
    scanf("%d", &basic_math.attempted);
    printf("%sEnter correct questions for Basic Math: ", "\033[1;36m");
    scanf("%d", &basic_math.correct);

    printf("\n%sEnter attempted questions for IQ and Analytical Geometry: ", "\033[1;36m");
    scanf("%d", &IQ.attempted);
    printf("%sEnter correct questions for IQ and Analytical Geometry: ", "\033[1;36m");
    scanf("%d", &IQ.correct);

    printf("\n%sEnter attempted questions for English: ", "\033[1;36m");
    scanf("%d", &eng.attempted);
    printf("%sEnter correct questions for English: ", "\033[1;36m");
    scanf("%d", &eng.correct);

    return (adv_math.correct - ((adv_math.attempted - adv_math.correct) * 0.25)) +
           (basic_math.correct - ((basic_math.attempted - basic_math.correct) * 0.25)) +
           (IQ.correct - ((IQ.attempted - IQ.correct) * 0.25)) +
           (0.3333 * (eng.correct - ((eng.attempted - eng.correct) * 0.25)));
}

int main() {
    float fsc, matric, entry, aggregate;

    printf("\n%s========== Grade Calculator ==========\n", "\033[1;33m");
    printf("\n%sEnter FSC marks: ", "\033[1;32m");
    scanf("%f", &fsc);
    printf("%sEnter Matric marks: ", "\033[1;32m");
    scanf("%f", &matric);
	entry = cal_entry();

    aggregate = ((fsc / 1100.0) * 40.0) + ((matric / 1100.0) * 10.0) + (entry / 2.0);

    printf("\n%s======================================\n", "\033[1;33m");
    printf("%sAggregate is %.4f\n", "\033[1;35m", aggregate);
    printf("%s======================================\n", "\033[1;33m");
    printf("Press any key to exit");

    getch();
    return 0;
}
