#include <stdio.h>
int area_rectangle(int length, int width) {
return length * width;
}

int main() {
int length, width;

printf("Enter length and width: ");
scanf("%d %d"

, &length, &width);

printf("Length: %d, Width: %d, ", length, width);
printf("Area: %d\n"

, area_rectangle(length, width));

return 0;
}