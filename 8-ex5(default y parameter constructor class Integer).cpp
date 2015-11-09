class Integer {
public:
  int val;
  Integer() { 
    val = 0; 
  }
  Integer(int v) {
    val = v;
  } 
}; 

int main() {
  Integer i; // ok
  Integer j(3); // ok 
}
