# OOP(Object_Oriented)란?


### OOP 4대 기본 원칙
1. 추상화
2. 캡슐화
3. 상속
4. 다형성
* 추상화(Abstraction)
    * 

* 캡슐화(Encapsulation)
    *  
* 상속(Inheritance)
    
# 다형성(Polymorphism)
### Overloading
    
    함수의 형태(parameter)만 다르게 여러개 쓰는것

```c++
class Number{
  Number(){}
  // 아래 add함수를  오버로딩된이다.
  void add(int a, int b){  }
  void add(int a, int b, int c) {  }
  void add(int a, int b, int c, int d) { }
};
```
### Overriding

    자식 클래스에서 부모클래스를 쓰는것
```c++
class Number{
  Number(){}
  // 아래 add함수를  오버로딩된이다.
  void add(int a, int b){  }
  void add(int a, int b, int c) {  }
  void add(int a, int b, int c, int d) { }
};

class ExtendNumber: public Number{
    // 아래 함수는 Number라는 부모클래스의 오버라이딩된 함수이다.
  void add(int a, int b){  }
  void add(int a, int b, int c) {  }
  void add(int a, int b, int c, int d) { }
};
```

### SOLID
* `S`ingle Responsibility Principal
    *
* `O`
    *
* `L`
    *
* `I`
    *
* `D`
    *

# Overloading vs Overriding