#define ledPin 8
#define ledPin 9
#define ledPin 10
#define ledPin 11

byte state;



void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

}

void loop() {
  if(Serial.available()>0)
  {
    state = Serial.read(); 
      if (state == 1) {
        digitalWrite(8,HIGH); 
        
        }
      if (state == 5) {
         digitalWrite(8,LOW);
         
        }
       if (state == 2) {
         digitalWrite(9,HIGH); 
        
       }
       if (state == 6) {
         digitalWrite(9,LOW); 
        
       }
       if (state == 3) {
         digitalWrite(10,HIGH); 
         
       }
       if (state == 7) {
         digitalWrite(10,LOW); 
        
       }
       if (state == 4) {
         digitalWrite(11,HIGH); 
        
       }
       if (state == 8) {
         digitalWrite(11,LOW); 
       
       }
       if (state == 9) {
         digitalWrite(8,LOW);
         digitalWrite(9,LOW);
         digitalWrite(10,LOW);
         digitalWrite(11,LOW);
        
       }
       if (state == 0) {
         digitalWrite(8,HIGH);
         digitalWrite(9,HIGH);
         digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
        
       }
     
  }
}
