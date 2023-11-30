#include <stdio.h>
int add(int a, int b) {
  return a + b;
}
/* Since C does not have classes, we will use a struct */
typedef struct {
  char* type;
  char* color;
} Car;

/* Function to display car attributes */
void display(Car car) {
  printf("Car Type: %s\nCar Color: %s\n", car.type, car.color);
}

int main(void) {
  printf("Hello World\n");
  // int a = 5;  
  // int b = 6;
  // int c = add(5, 6);
  printf("%d\n", add(5, 6));
  Car myCar;

  myCar.type = "Sedan";
  myCar.color = "Red";

  display(myCar);
  return 0;
}