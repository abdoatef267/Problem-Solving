
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
### 6.Word Frequency Counter
```dart
void main() {
  String sentence = "hello world hello dart dart dart";
  List<String> words = sentence.split(' ');
  Map<String, int> wordCount = {};

  for (var word in words) {
    wordCount[word] = (wordCount[word] ?? 0) + 1;
  }

  wordCount.forEach((word, count) {
    print("$word: $count");
  });
}
```
### 7. Check Membership
```dart
void main() {
  Set<String> knownWords = {"dart", "flutter", "async", "future"};
  String input = "flutter";

  if (knownWords.contains(input)) {
    print("The word '$input' is known.");
  } else {
    print("The word '$input' is unknown.");
  }
}
```
### 8. Delayed Capital Letters
```dart
import 'dart:async';

Future<List<String>> delayedUppercase(String text) async {
  await Future.delayed(Duration(seconds: 2));
  return text.split('').map((c) => c.toUpperCase()).toList();
}

void main() async {
  String input = "dart";
  List<String> result = await delayedUppercase(input);
  print("Uppercased after delay: $result");
}
```
### 9. Async Data Chain
```dart
import 'dart:math';

Future<int?> fetchAge() async {
  await Future.delayed(Duration(seconds: 1));
  return Random().nextBool() ? Random().nextInt(100) : null;
}

void main() {
  fetchAge().then((value) {
    int age = value ?? 0;
    print("Age: $age");
  });
}
```
### 10. Full Pipeline
```dart
void main() {
  String sentence = "hello world 123";

  final uniqueLetters = sentence
      .split('')
      .toSet()
      .where((c) => RegExp(r'[a-zA-Z]').hasMatch(c))
      .toList();

  print("Unique letters: $uniqueLetters");

  List<int> asciiCodes = uniqueLetters.map((c) => c.codeUnitAt(0)).toList();

  int totalAscii = asciiCodes.isEmpty ? 0 : asciiCodes.reduce((a, b) => a + b);

  print("Total ASCII sum: $totalAscii");

  String strength = totalAscii > 1000 ? "Strong" : "Weak";
  print("Strength: $strength");
}
```
