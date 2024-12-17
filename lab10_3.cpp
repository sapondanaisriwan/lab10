#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  ifstream read;
  ifstream read2;
  read.open("./score.txt");
  read2.open("./score.txt");
  string textLine;
  double sum = 0, love = 0, mean = 0, sd = 0;
  int count = 0;
  while (getline(read, textLine))
  {
    count += 1;
    sum += stod(textLine);
    // cout << stod(textLine) << endl;
  }
  mean = sum / count;
  read.close();

  while (getline(read2, textLine))
  {
    // sd += pow((stod(textLine) - mean), 2);
    // cout << stod(textLine) << endl;
    love += pow((stod(textLine) - mean), 2);
  }
  sd = pow(love / count, 0.5);
  read2.close();
  cout << "Number of data = " << count << endl;
  cout << setprecision(3);
  cout << "Mean = " << mean << endl;
  cout << "Standard deviation = " << sd;
}