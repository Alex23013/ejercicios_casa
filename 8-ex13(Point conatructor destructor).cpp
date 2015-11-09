class Point {
public:
  int x, y;
  Point() { 
    cout << "constructor invoked" << endl; 
  }
  ~Point() {
    cout << "destructor invoked" << endl;
  } 
}; 
int main() {
  Point *p = new Point;
  delete p;
}
