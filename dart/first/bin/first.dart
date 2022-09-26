import 'package:first/first.dart' as first;

int? a;
int b = 4;
late int c;

void main() {
  a = 20;
  c = 6;
  a = a! + c;
  print(a);
  print('Hello world: ${first.calculate()}!');
}
