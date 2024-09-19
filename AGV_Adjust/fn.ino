void forward() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  
  digitalWrite(MR_IN1, HIGH); //motor1
  digitalWrite(MR_IN2, LOW);  //motor1
  digitalWrite(MR_IN3, HIGH); //motor2
  digitalWrite(MR_IN4, LOW);  //motor2
  digitalWrite(ML_IN1, HIGH); //motor4
  digitalWrite(ML_IN2, LOW);  //motor4
  digitalWrite(ML_IN3, HIGH); //motor3
  digitalWrite(ML_IN4, LOW);  //motor3
}

void backward() {

}

void slide_left() {

}

void slide_right() {

}

void slide_left_front() {
 
}

void slide_right_front() {

}

void slide_left_back() {

}

void slide_right_back() {

}


void turn_left() {

}

void turn_right() {

}

void stop() {

}