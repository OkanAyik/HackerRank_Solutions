class Rectangle {
public:
  int m_height;
  int m_width;
  void display();
};

class RectangleArea : public Rectangle {
public:
  void read_input();
  void display();
};

void RectangleArea::read_input() {
  cin >> m_height;
  cin >> m_width;
}

void RectangleArea::display() {

  cout << m_height * m_width<<endl;
}

void Rectangle::display() {
  cout << m_height << " ";
  cout << m_width << endl;
 
}
