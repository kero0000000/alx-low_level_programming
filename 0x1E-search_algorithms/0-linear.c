#include <stdio.h>
/**
* check if the array is NULL
* Iterate through the array
* print the current value being compared
* check if the current value matches the value we are searching for
* return the index of the found value 
* if the value is not found ,return -1
**/
int linear_search(int *array, size_t size, int value) 
{
if (array == NULL) 
{
return -1;
}
for (size_t i = 0; i < size; i++) {
printf("Comparing array[%zu] = %d\n", i, array[i]);
if (array[i] == value) {
return (i); 
}
}
return -1;
}
int main() 
{
int array[] = {10, 20, 30, 40, 50};
size_t size = sizeof(array) / sizeof(array[0]);
int value = 30;
int result = linear_search(array, size, value);
if (result != -1) 
{
printf("Value %d found at index %d\n", value, result);
} 
else 
{
printf("Value %d not found in the array\n", value);
}
return 0;
}
