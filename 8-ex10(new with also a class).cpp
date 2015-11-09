class Point {
public: 
  int x, y; 
};

int main() {
  Point *p = new Point; 
  delete p; 
}

