 #include<Servo.h>                      // SG90 서보 모터 라이브러리 헤더 파일 선언

   Servo myservo;                          // Servo 객체 선언

     /* 각 핀(Pin) 정의 */

   ​int Switch0_Pin = 8;                    // 1번째 스위치

   int Switch1_Pin = 9;                    // 2번째 스위치


   void setup()                              // 초기화

   {

     ​myservo.attach(11);                   // SG90 서보 모터 핀(Pin) 선언 및 출력 포트로 설정 

     pinMode(Switch0_Pin, INPUT);     // 1번째 스위치 핀(Pin) 입력 포트 설정

     pinMode(Switch1_Pin, INPUT);     // 2번째 스위치 핀(Pin) 입력 포트 설정
     
   }

     ​/* 스위치를 이용하여 SG90 서보 모터 회전각을 제어하도록 한다.    변위 각: 0도, 90도, 180도 */

   ​void loop()                                 // 무한 루프

   {

     ​if(digitalRead(Switch0_Pin) == LOW)        // 1번째 스위치를 누르면

     {

        ​myservo.write(0);                               // SG90 서보 모터 0도

     }

     ​else if(digitalRead(Switch1_Pin) == LOW)   // 2번째 스위치를 누르면

     {

        ​myservo.write(90);                              // SG90 서보 모터 90도
     }
   }
