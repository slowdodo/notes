# OOP 4대 기본 특징 
1. 추상화(Abstraction)
    * 인터페이스로 클래스들의 공통적인 특성(변수, 메소드)들을 묶어 표현하는 것
    * [추상화 ex](#추상화)

2. 캡슐화(Encapsulation)
    * Public
    * Protected
    * Private
    * default (대표적으로 JAVA에 존재)
    * [캡슐화 ex](#캡슐화-encapsulation-예제)

![캡슐화](https://images.velog.io/images/kimsy8979/post/85df59fc-e076-4765-ba8e-1b2d7de4cf57/image.png)

3. 상속(Inheritance)
    * 자식 클래스가 부모 클래스의 특성과 기능을 물려받는 것
    * 기능의 일부분을 변경하는 경우 자식 클래스에서 상속받아 수정 및 사용함
    * 상속은 캡슐화를 유지, 클래스의 재사용이 용이하도록 해 준다.
    * [상속 ex](#상속-inheritance-예제)
4. 다형성(Polymorphism)
    * 어떤 변수,메소드가 상황에 따라 다른 결과를 내는 것
        * Overloading
            * 함수의 형태(parameter)만 다르게 여러개 쓰는것
            * [오버로딩 ex](#overloading-예제)
        * Overriding
            * 자식 클래스에서 부모클래스의 함수를 그대로 쓰는것
            * [오버라이딩 ex](#overriding-예제)
### 추상화
```c++
class poo{
    int a;
    int b;
    poo(int a, int b):a(a),b(b){}
    void add(int a, int b){}
    void mult(int a, int b){}
}
```
### 캡슐화 Encapsulation 예제
```c++
// 참고) cpp은 default권한이 기본기능으론 없다. java같은 다른언어에는 있다. 
// 라이브러리 가져오거나 커스텀 하면 구현은 가능하지만

//struct의 default 접근 권한은 public
struct poo{
    int a = 10; // public <- struct default는 public이다
}
// class default 접근 권한은 private
class Number{
    int a = 10; // private <- class default는 private이다
//////////////////////////////
private:
    int b = 20; // private
//////////////////////////////
protected: 
    int c = 30; // protected
//////////////////////////////
public: 
    int d = 40; // public
}
```

### 상속 Inheritance 예제
```c++

class Number{
  Number(){}
  // 아래 add함수를  오버로딩된이다.
  void add(int a, int b, int c, int d) { }
};

class ExtendNumber: public Number{
// 부모 Number class에서 add 함수를 상속받았기에 
// ExtendNumber클래스는 add함수를 사용이 가능하다.
  void mult(int a, int b){  }
};

```

### Overloading 예제
    

```c++
class Number{
  Number(){}
  // 아래 add함수를  오버로딩된이다.
  void add(int a, int b){  }
  void add(int a, int b, int c) {  }
  void add(int a, int b, int c, int d) { }
};
```
### Overriding 예제

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
