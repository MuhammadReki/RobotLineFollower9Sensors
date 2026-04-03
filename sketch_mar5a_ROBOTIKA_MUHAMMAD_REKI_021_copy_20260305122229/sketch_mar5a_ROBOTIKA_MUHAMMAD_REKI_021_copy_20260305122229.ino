void setup() {

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {

  int s1 = digitalRead(2);
  int s2 = digitalRead(3);
  int s3 = digitalRead(4);
  int s4 = digitalRead(5);
  int s5 = digitalRead(6);

  // MAJU (sensor tengah kena garis)
  if(s1==1 && s2==1 && s3==0 && s4==1 && s5==1){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    digitalWrite(10,0);
  }

  // BELOK KIRI
  if(s2==0 || s1==0){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
  }

  // BELOK KANAN
  if(s4==0 || s5==0){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,1);
  }

}