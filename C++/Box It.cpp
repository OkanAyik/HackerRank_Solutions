
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

class Box {
public:
    Box() 
    {
        length = 0;
        height = 0;
        breadth = 0;
    }

    Box(int l, int b, int h) : length{ l }, breadth{ b }, height{ h }{}
    
    Box(const Box& other)
    {
        length = other.length ;
        breadth = other.breadth;
        height = other.height ;
    }
    
    int getLength()const
    {
        return length;
    }
    
    int getBreadth()const
    {
        return breadth;    
    }
    
    int getHeight()const
    {
        return height;
    }

    long long CalculateVolume()const
    {
        return static_cast<long long>(length) * (breadth * height);
    }
    
    bool operator<(const Box &b)const
    {
        if(this->length < b.length)
            return true;
        else if(this->breadth < b.breadth && this->length == b.length)
            return true;
        else if(this->height < b.height && this->breadth == b.breadth && this->length ==b.length)
            return true;
        else {
            return false;   
        }
    }
    
    friend ostream& operator<<(ostream &out, const Box &b)
    {
        out << b.length << " " << b.breadth << " " << b.height;
        return out;
    }
    
private:
    int length;
    int breadth;
    int height;
};

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

