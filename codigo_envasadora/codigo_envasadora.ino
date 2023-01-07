int esteira = 2; 
int esteiraPower = 3;
int primeiroSensor = 4;
int primeiroAtuador = 5;
int segundoSensor = 6;
int inverteEsteira = 7;
int primeiroSensorDeParada = 8;
int segundoSensorDeParada = 9;

int faseEsteira = 0;
int estadoBotaoDaEsteira = 0;
int estadoPrimeiroSensor = 0;
int estadoSegundoSensor = 0;
int estadoPrimeiraParada = 0;
int estadoSegundaParada = 0;

  void setup() {
    
    pinMode(esteira, OUTPUT);
    pinMode(esteiraPower, INPUT_PULLUP);
    pinMode(primeiroSensor, INPUT);
    pinMode(primeiroAtuador, OUTPUT);
    pinMode(segundoSensor, INPUT);
    pinMode(inverteEsteira, OUTPUT);
    pinMode(primeiroSensorDeParada, INPUT);
    pinMode(segundoSensorDeParada, INPUT);

    faseEsteira = 0;
    digitalWrite(esteira, HIGH);
    digitalWrite(primeiroAtuador, HIGH);
  
  }
  
  void loop() {
    
    funcaoEsteira();
  
  }

  void funcaoEsteira(){
  estadoBotaoDaEsteira = digitalRead(esteiraPower);

    if(estadoBotaoDaEsteira == HIGH){
      if(faseEsteira < 1){
        faseEsteira = faseEsteira+1;
      } else {
        faseEsteira = 0;
      }
    }

    delay(200);
    
    switch(faseEsteira){

      case 1:
        digitalWrite(esteira, HIGH);
        funcaoPrimeiraParada();
        funcaoSegundaParada();
        break;

      default:
        digitalWrite(esteira, LOW);
        break;

    }
    
  }
  
  void funcaoPrimeiroSensor(){
  estadoPrimeiroSensor = digitalRead(primeiroSensor);

    if(estadoPrimeiroSensor == HIGH){
      digitalWrite(esteira, LOW);
      delay(1000);
      digitalWrite(primeiroAtuador, HIGH);
    } else {
      digitalWrite(primeiroAtuador, LOW);
    }
    
  }

  void funcaoSegundoSensor(){
  estadoSegundoSensor = digitalRead(segundoSensor);

    if(!estadoSegundoSensor == HIGH){
      digitalWrite(inverteEsteira, HIGH);
      delay(5000);
      digitalWrite(inverteEsteira, LOW);
    }
  }

  void funcaoPrimeiraParada(){
  estadoPrimeiraParada = digitalRead(primeiroSensorDeParada);

    if(!estadoPrimeiraParada == HIGH){
      funcaoPrimeiroSensor();
    } else {
      digitalWrite(primeiroAtuador, HIGH);
    }
  }

  void funcaoSegundaParada(){
  estadoSegundaParada = digitalRead(segundoSensorDeParada);

    if(!estadoSegundaParada == HIGH) {
      funcaoSegundoSensor();
    }
  }
