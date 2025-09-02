#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    char str[200005];
    int freq[26];

    while (t--) {
        scanf("%s", str);
        int len = strlen(str);

        for (int i = 0; i < 26; i++) freq[i] = 0;

        for (int i = 0; i < len; i++) {
            freq[str[i] - 'A']++;
        }

        for (int i = 0; i < freq['T' - 'A']; i++) printf("T");

        for (int i = 0; i < freq['F' - 'A']; i++) printf("F");

        for (int i = 0; i < freq['N' - 'A']; i++) printf("N");

        for (int i = 0; i < 26; i++) {
            if (i == ('F' - 'A') || i == ('N' - 'A') || i == ('T' - 'A')) continue;
            for (int j = 0; j < freq[i]; j++) {
                printf("%c", 'A' + i);
            }
        }

        printf("\n");
    }

    return 0;
}
