class Integer {
public:
  int val;
  Integer(int v) { 
    val = v; 
  }
};

int main() { 
  Integer a[] = { Integer(2), Integer(5) }; // ok 
  Integer b[2];// este no funciona
}
