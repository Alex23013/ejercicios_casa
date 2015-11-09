class Integer {
public:
  int val;
  Integer(int v) { 
    val = v; cout << "constructor with arg " << v << endl; 
  }
};

int main() { 
  Integer i(3);
}
 
