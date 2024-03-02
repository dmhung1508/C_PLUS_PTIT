#include <stdio.h>
#include <math.h>
#include <string.h>
void bai4_1() {
    int n;
    printf("bai 4.1\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%d", &n);
    if (n < 0 || n >= 8) {
        printf("ERROR");
        return;
    } else {
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * i;
        }
        printf("%d", ans);
    }
}

void bai4_2() {
    int n;
    printf("bai 4.2\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%d", &n);
    if (n < 2) {
        printf("khong phai so nguyen to");
        return;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("khong phai so nguyen to");
                return;
            }
        }
        printf("la so nguyen to");
    }
}

void bai4_3() {
    int n;
    printf("bai 4.3\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%d", &n);
    if (n >= 1000) {
        printf("ERROR");
        return;
    } else {
        int sum2 = 0;
        while (n > 0) {
            sum2 += n % 10;
            n = n / 10;
        }
        printf("%d", sum2);
    }
}

void bai4_4() {
    int a3, b3;
    printf("bai 4.4\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%d %d", &a3, &b3);
    if (a3 <= 0 || b3 <= 0) {
        printf("ERROR");
    } else {
        int x = a3, y = b3;
        while (a3 != b3) {
            if (a3 > b3)
                a3 = a3 - b3;
            else
                b3 = b3 - a3;
        }
        printf("%d\n", a3);
        printf("%d\n", x * y / a3);
    }
}

void bai4_5() {
    double a4, b4, c4;
    printf("bai 4.5\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%lf %lf %lf", &a4, &b4, &c4);
    if (a4 == 0 && b4 == 0 && c4 == 0) {
        printf("Phuong trinh vo so nghiem");
        return;
    }
    if (a4 == 0 && b4 != 0) {
        printf("%lf", -c4 / b4);
        return;
    }
    if (a4 == 0 && b4 == 0 && c4 != 0) {
        printf("Phuong trinh vo nghiem");
        return;
    }
    double denta = b4 * b4 - 4 * a4 * c4;
    if (denta == 0) {
        printf("%lf", -b4 / (2 * a4));
    }
    if (denta > 0) {
        printf("%lf\n", ((-b4 + sqrt(denta)) / (2 * a4)));
        printf("%lf\n", ((-b4 - sqrt(denta)) / (2 * a4)));
    }
    if (denta < 0) {
        printf("%lf+%lfi\n", -b4 / (2 * a4), sqrt(fabs(denta)) / (2 * a4));
        printf("%lf-%lfi\n", -b4 / (2 * a4), sqrt(fabs(denta)) / (2 * a4));
    }
}

void bai4_6() {
    int n;
    double x;
    printf("bai 4.6\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%d %lf", &n, &x);
    if (n <= 0) {
        printf("Error");
        return;
    } else {
        double S = 0;
        for (int i = 0; i <= n; i++) {
            S += pow(x, i);
        }
        printf("%lf", S);
    }
}

void bai4_7() {
    double x, S = 1, trunggian = 1;
    printf("bai 4.7\n");
    printf("Tran Thi Bich Diep- 4235\n");
    int n;
    scanf("%d %lf", &n, &x);
    if (n < 0) {
        printf("Error");
    } else {
        for (int i = 1; i <= n; i++) {
            trunggian = trunggian * -x;
            S = S + trunggian;
        }
        printf("%lf", S);
    }
}

void bai4_8() {
    double x, S = 1, trunggian = 1, giaithua = 1;
    printf("bai 4.8\n");
    printf("Tran Thi Bich Diep- 4235\n");
    int n;
    scanf("%d %lf", &n, &x);
    if (n < 0) {
        printf("Error");
    } else {
        for (int i = 1; i <= n; i++) {
            trunggian = trunggian * x;
            giaithua = giaithua * i;
            S += trunggian / giaithua;
        }
        printf("%lf", S);
    }
}

void bai4_9() {
    int n;
    double x, S;
    printf("Bai 4.9\n");
    printf("Tran Thi Bich Diep - 4235\n");
    scanf("%lf %d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error");
    } else {
        S = sqrt(x);
        for (int i = 2; i <= n; i++)
            S = sqrt(x + S);
        printf("%.4lf", S);
    }
}

void bai4_10() {
    int n;
    double x, S = 1, trunggian = 1;
    printf("bai 4.10\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%lf %d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error");
    } else {
        for (int i = 1; i <= n; i++) {
            trunggian = trunggian * x;
            S = S + trunggian / i;
        }
        printf("%.4lf", S);
    }
}

void bai4_11() {
    int n;
    double x, S = 1, trunggian = 1, giaithua = 1;
    printf("bai 4.11\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%lf %d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error");
    } else {
        for (int i = 1; i <= n; i++) {
            trunggian = trunggian * x;
            giaithua = giaithua * i;
            S = S + trunggian / giaithua;
        }
        printf("%.4lf", S);
    }
}

void bai4_12() {
    int n;
    double x, S = 1, trunggian = 1, giaithua = 1;
    printf("bai 4.12\n");
    printf("Tran Thi Bich Diep- 4235\n");
    scanf("%lf %d", &x, &n);
    if (n < 1 || x < 0) {
        printf("Error");
    } else {
        for (int i = 1; i <= n; i++) {
            trunggian = trunggian * -x;
            giaithua = giaithua * i;
            S = S + trunggian / giaithua;
        }
        printf("%.4lf", S);
    }
}

int main() {
    char choice[20];
    printf("Enter code bai: ");
    scanf("%s", choice);

    float a = atof(choice);
    int b;

    if (strlen(choice) == 3) {
        b = (int)(a * 10);
    } else {
        b = (int)(a * 100);
    }
    switch (b) {
        case 41:
            bai4_1();
            break;
        case 42:
            bai4_2();
            break;
        case 43:
            bai4_3();
            break;
        case 44:
            bai4_4();
            break;
        case 45:
            bai4_5();
            break;
        case 46:
            bai4_6();
            break;
        case 47:
            bai4_7();
            break;
        case 48:
            bai4_8();
            break;
        case 49:
            bai4_9();
            break;
        case 410:
            bai4_10();
            break;
        case 411:
            bai4_11();
            break;
        case 412:
            bai4_12();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
