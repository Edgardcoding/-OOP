#include <iostream>

using namespace std;

class Contoh {
    private:
      int *x;

    public:
      // constructor
      Contoh(int nilaiX) {
          x = new int;
          *x = nilaiX;
      }

      // destrutor
      ~Contoh() {
        delete x;

        cout << "Ini adalah fungsi destructor." << endl;
        cout << "Object dan variable pointer berhasil dihapus." << endl;
      }

      void getX() {
        cout << endl << "Nilai x: " << *x << endl;
      }
};

int main()
{
    Contoh obj(25);

    obj.getX();

    return 0;
}