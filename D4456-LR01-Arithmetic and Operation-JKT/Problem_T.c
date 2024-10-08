#include <stdio.h>

int main() {
    char courseCode[11];
    unsigned short jam_start, menit_start, jam_end, menit_end;
    for (int i = 0; i < 5; i++) {
        scanf("%s %hu:%hu-%hu:%hu", courseCode, &jam_start, &menit_start, &jam_end, &menit_end);
        printf("%s %02hu:%02hu-%02hu:%02hu\n", courseCode, jam_start - 1, menit_start, jam_end - 1, menit_end);
    }
    return 0;
}