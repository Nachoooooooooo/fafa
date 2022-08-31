//nombro las variables de 
//if de sitoco dos botones,que se prenda la primera luz. si se tocan los 4 botones que se prendan las 2
int x, y;
int botonUno = 2;
int botonDos = 3;
int botonTres = 4;
int botonCuatro = 5;

int estadoUno;
int estadoDos;
int estadoTres;
int estadoCuatro;

// nombro las variables de la luz
int ledUno = 6;
int ledDos = 7;

void setup() {
  
  Serial.begin(9600);
  delay(100);
  pinMode(ledUno, OUTPUT);
  pinMode(ledDos, OUTPUT);

}

void loop() {
 
  digitalWrite(ledUno, LOW);
  digitalWrite(ledDos, LOW);

  estadoUno = digitalRead(botonUno);
  estadoDos = digitalRead(botonDos);
  estadoTres = digitalRead(botonTres);
  estadoCuatro = digitalRead(botonCuatro);
  
  if(estadoUno && estadoDos == HIGH){
      digitalWrite(ledUno, HIGH);
    }else{
      digitalWrite(ledUno,LOW);
    }

   if(estadoTres && estadoCuatro == HIGH){
      digitalWrite(ledDos, HIGH);
    }else{
      digitalWrite(ledDos,LOW);
    }
}
