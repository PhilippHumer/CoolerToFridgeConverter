#define NR_PINS 8

class LED4X
{
private:
  int m_pins[NR_PINS];

public:
  LED4X(int pins[NR_PINS]);
  write_number(unsigned int number, unsigned int segment);
};

int main()
{
    Date d { 2015, 10, 14 };
    d.print();

    return 0;
}