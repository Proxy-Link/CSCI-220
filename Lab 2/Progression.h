class Progression
{ // a generic progression
public:
    Progression(long f = 0) // constructor
        : first(f), cur(f)
    {
    }
    virtual int ˜Progression(){};     // destructor
    void printProgression(int n); // print the first n values
protected:
    virtual long firstValue(); // reset
    virtual long nextValue();  // advance
protected:
    long first; // first value
    long cur;   // current value
};

class absoluteProgression: public Progression
{
    public:
        absoluteProgression()
        {
        first = 2;
        second = 200;
        }
        absoluteProgression(long, long)
        {

        }

        cur = std::abs (first - second); 
    protected:
        long second;
        virtual long firstValue();

    

};

