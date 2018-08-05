class Box
{
private:
    int l;
    int b;
    int h;
    
public:
    int getLength()
    {
        return l;
    }
    
    int getBreadth()
    {
        return b;
    }
    
    int getHeight()
    {
        return h;
    }
    
    long long CalculateVolume()
    {
        return (long long) l * b * h;
    }
    
    bool operator<(Box &b)
    {
        if (getLength() < b.getLength())
        {
            return true;
        }
        
        if (getLength() == b.getLength() && getBreadth() < b.getBreadth())
        {
            return true;
        }
        
        if (getLength() == b.getLength() && getBreadth() == b.getBreadth() && getHeight() < b. getHeight())
        {
            return true;
        }
        
        return false;
    }
    
    friend ostream &operator<<(ostream &output, Box &b)
    {
        output << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
        
        return output;
    }
    
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    
    Box(Box &original)
    {
        l = original.getLength();
        b = original.getBreadth();
        h = original.getHeight();
    }
};
