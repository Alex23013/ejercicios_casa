class Car : public Vehicle { // Makes Car inherit from Vehicle
  string style ;
public :
  Car(const string & myLicense , const int myYear , const string & myStyle )
   :Vehicle ( myLicense , myYear ), style ( myStyle ) {}
  const string & getStyle () { return style ;}
 };
