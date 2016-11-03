
int i, j,segment[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
void setup() {
  // put your setup code here, to run once:
  for(i=0;i<14;i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(i = 0; i< 10;i++){
    for(j= 0;j<10;j++){
      acende(i,j);
      delay(1000);      
    }  
  }
  
}

void acende(int y, int x){
  digitalWrite(0, ((segment[x]&0b00000001))?HIGH:LOW);
 digitalWrite(1, ((segment[x]&0b00000010))?HIGH:LOW);
 digitalWrite(2, ((segment[x]&0b00000100))?HIGH:LOW);
 digitalWrite(3, ((segment[x]&0b00001000))?HIGH:LOW);
 digitalWrite(4, ((segment[x]&0b00010000))?HIGH:LOW);
 digitalWrite(5, ((segment[x]&0b00100000))?HIGH:LOW);
 digitalWrite(6, ((segment[x]&0b01000000))?HIGH:LOW);
 digitalWrite(7, ((segment[y]&0b00000001))?HIGH:LOW);
 digitalWrite(8, ((segment[y]&0b00000010))?HIGH:LOW);
 digitalWrite(9, ((segment[y]&0b00000100))?HIGH:LOW);
 digitalWrite(10, ((segment[y]&0b00001000))?HIGH:LOW);
 digitalWrite(11, ((segment[y]&0b00010000))?HIGH:LOW);
 digitalWrite(12, ((segment[y]&0b00100000))?HIGH:LOW);
 digitalWrite(13, ((segment[y]&0b01000000))?HIGH:LOW);
}
