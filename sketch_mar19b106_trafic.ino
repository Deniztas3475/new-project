int redLight =13;
int yellowLight=12;
int greenLight=11;

const int REDTIME =5000; //sabit deüişken olarak süreleri atadık.Kırmızı 5, sarı1 , yeşil 4 saniye
const int YELLOWTIME=1000;
const int GREENTIME = 4000; 

int count =0;//trafik lambasının kaç tur attığını tuttuk

void setup() {
  Serial.begin(9600);//haberleşmeyi başlattık
  pinMode(redLight,OUTPUT);
  pinMode(yellowLight,OUTPUT);
  pinMode(greenLight,OUTPUT);

  Serial.println("trafik ısıgı ugulaması");
  delay(100);

  digitalWrite(redLight,LOW);
  digitalWrite( yellowLight,LOW);
  digitalWrite( greenLight,LOW);

}

void loop(){
  Serial.println("loop number : " + String(++count));

  Serial.println("bekle...");
  digitalWrite(redLight,HIGH);
  delay(REDTIME);


  Serial.println("hazır ol");
  digitalWrite(yellowLight,HIGH);
  delay(YELLOWTIME);

  digitalWrite(redLight,LOW);
  digitalWrite(yellowLight,LOW);
  
  
  Serial.println("Gec");
  digitalWrite(greenLight,HIGH);
  delay(GREENTIME);

  digitalWrite(greenLight,LOW);

  
}



