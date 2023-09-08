#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*int main() {
    int n;

    printf("Pentagon numbers less than 100:\n");

    for (n = 1; ; n++) {
        int pentagon = n * (3 * n - 1) / 2;

        if (pentagon < 100) {
            printf("%d ", pentagon);
        } else {
            break;
        }
    }

    printf("\n");

    return 0;
}*/

/*int main() {
    int rows, columns;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main() {
    int numStudents = 10;
    float studentData[numStudents][2];
    float totalHeight = 0, totalWeight = 0;

    for (int i = 0; i < numStudents; i++) {
        printf("Enter height for student %d: ", i + 1);
        scanf("%f", &studentData[i][0]);

        printf("Enter weight for student %d: ", i + 1);
        scanf("%f", &studentData[i][1]);

        totalHeight += studentData[i][0];
        totalWeight += studentData[i][1];
    }

    float averageHeight = totalHeight / numStudents;
    float averageWeight = totalWeight / numStudents;

    printf("\nAverage height of the students: %.2f centimeters\n", averageHeight);
    printf("Average weight of the students: %.2f kilograms\n", averageWeight);

    return 0;
}*/
/*int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
*/

/*int main() {
    char inputString[100], outputString[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (i = 0; inputString[i] != '\0'; i++) {
        if (isalpha(inputString[i])) {
            outputString[j++] = inputString[i];
        }
    }

    outputString[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", outputString);

    return 0;
}*/
/*int main() {
    char inputString[100];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch != ' ' && ch != '\n' && ch != '\t') {
            specialChars++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}*/
/*#define MAX_STRING_LENGTH 100
#define MAX_STRING_COUNT 10

void sortStrings(char strings[][MAX_STRING_LENGTH], int count) {
    int swapped;
    char temp[MAX_STRING_LENGTH];

    do {
        swapped = 0;

        for (int i = 0; i < count - 1; i++) {
            if (strcmp(strings[i], strings[i + 1]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[i + 1]);
                strcpy(strings[i + 1], temp);
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    int count;
    char inputStrings[MAX_STRING_COUNT][MAX_STRING_LENGTH];

    printf("Enter the number of strings (up to %d): ", MAX_STRING_COUNT);
    scanf("%d", &count);

    if (count <= 0 || count > MAX_STRING_COUNT) {
        printf("Invalid number of strings. Please enter a value between 1 and %d.\n", MAX_STRING_COUNT);
        return 1;
    }
    while (getchar() != '\n');

    for (int i = 0; i < count; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(inputStrings[i], sizeof(inputStrings[i]), stdin);
        inputStrings[i][strcspn(inputStrings[i], "\n")] = '\0';
    }

    sortStrings(inputStrings, count);

    printf("Strings in dictionary order:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", inputStrings[i]);
    }

    return 0;
}*/


/*float squareArea(float edge) {
    return edge * edge;
}

int main() {
    float edge;

    printf("Karenin bir kenar uzunlugunu girin: ");
    scanf("%f", &edge);

    if (edge <= 0) {
        printf("Geçersiz kenar uzunluðu girdiniz. Pozitif bir sayý girin.\n");
    } else {
        float area = squareArea(edge);
        printf("Karenin alani: %.2f\n", area);
    }

    return 0;
}
*/

/*int main() {
    float numbers[5];
    float sum = 0;

    printf("Lutfen bes sayiyi giriniz:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    float average = sum / 5;
    printf("Girilen sayilarin ortalamasi: %.2f\n", average);

    return 0;
}
*/
/*int isEven(int number) {
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Bir sayi giriniz: ");
    scanf("%d", &num);
    if (isEven(num)) {
        printf("%d bir cift sayidir.\n", num);
    } else {
        printf("%d bir tek sayidir.\n", num);
    }

    return 0;
}*/

/*int is_prime(int num);
int is_armstrong(int num);

int main() {
    int num;
    printf("Bir tamsayi girin: ");
    scanf("%d", &num);
    if (is_prime(num)) {
        printf("%d bir asal sayidir.\n", num);
    } else {
        printf("%d bir asal sayi degildir.\n", num);
    }
    if (is_armstrong(num)) {
        printf("%d bir Armstrong sayisidir.\n", num);
    } else {
        printf("%d bir Armstrong sayisi degildir.\n", num);
    }

    return 0;
}

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_armstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num) {
        return 1;
    } else {
        return 0;
    }
}

*/
/*#include <string.h>

int countWords(const char *sentence) {
    int wordCount = 0;
    int isWord = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') {
            isWord = 0;
        }
        else if (isWord == 0) {
            isWord = 1;
            wordCount++;
        }
    }

    return wordCount;
}

int main() {
    char sentence[1000];
    printf("Bir cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);
    int words = countWords(sentence);
    printf("Cumledeki kelime sayisi: %d\n", words);

    return 0;
}*/






