class IntegerArray {
public:
  int *data;
  int size;
  IntegerArray(int size) { 
    data = new int[size]; 
    this->size = size;
  }
  ~IntegerArray() {
    delete[] data; 
  } 
};

int main() {
  IntegerArray a(2);
  a.data[0] = 4; a.data[1] = 2;
  if (true) {
    IntegerArray b = a;
  }
  cout << a.data[0] << endl; // not 4!
}
