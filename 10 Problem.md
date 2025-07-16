
### 1. Split & Character Count
`?` is used to make a variable type nullable, meaning it can contain null.  
```dart
void main() {
  String input = "hello world";
  List<String> chars = input.split('');
  print("Characters: $chars");
  print("Total characters: ${chars.length}");
}

```

### 2. Transform Letters to Uppercase
```dart
void main() {
  String input = "dart";
  List<String> upper = input.split('').map((c) => c.toUpperCase()).toList();
  print("Uppercase letters: $upper");
}
```
### 3. Count Vowels with where()
```dart
void main() {
  String input = "dart programming";
  List<String> chars = input.split('');
  List<String> vowels = chars.where((c) => 'aeiou'.contains(c.toLowerCase())).toList();
  print("Vowels: $vowels");
  print("Vowel count: ${vowels.length}");
}
```
### 4. Sum of Digits in String
```dart
void main() {
  String input = "a1b2c3";
  List<int> digits = input
      .split('')
      .where((c) => '0123456789'.contains(c))
      .map((d) => int.parse(d))
      .toList();

  int sum = digits.reduce((a, b) => a + b);
  print("Digits: $digits");
  print("Sum: $sum");
}
```
### 5.Unique Characters
```dart
void main() {
  String word = "programming";
  Set<String> uniqueChars = word.split('').toSet();
  print("Unique characters: $uniqueChars");
}
```
### 6.Write a function named `generateRandom()` in dart that randomly returns `100` or `null`. Also, assign a return value of the function to a variable named `status` that can’t be null. Give status a default value of 0, if `generateRandom()` function returns null.
```dart
import 'dart:math';

int? generateRandom() {
  return Random().nextBool() ? 100 : null;
}

void main() {
  int status = generateRandom() ?? 0;
  print("Status: $status");
}
```
