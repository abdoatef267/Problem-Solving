## Dart Null Safety Practice

### 1. What is the purpose of the `?` operator in Dart null safety?
`?` is used to make a variable type nullable, meaning it can contain null.  
> `String? name; // Can be null or contain a text value.`

---

### 2. Create a `late` variable named `address`, assign a `US` value to it and print it.
```dart
void main() {
  late String address;
  address = "US";
  print(address);
}
```
###3.How do you declare a nullable type in Dart null safety?
```dart
int? age; //can be null or int
```
###4.Write a program in a dart to create an age variable and assign a `null` value to it using `?`
```dart
void main() {
  int? age = null;
  print(age); // print null
}
```
###5.Write a function that accepts a nullable int parameter and returns 0 if the value is null using null coalescing operator `??`

###6.Write a function named `generateRandom()` in dart that randomly returns `100` or `null`. Also, assign a return value of the function to a variable named `status` that can’t be null. Give status a default value of 0, if `generateRandom()` function returns null.
