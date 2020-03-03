    #include <iostream>
    
    using namespace std;
    
    int main() {
      int max, tot, i = 1, lokasi;
      
      int *a = &max;
      int *b = &tot;
      
      cout << "Masukkan jumlah elemen: ";
      cin  >> tot;
      cout << "Alamat dari jumlah : " << &b;
      
      int array[tot];
      cout << "Masukkan " << tot << " angka\n";
      for (i = 0; i < tot; i ++) {
        cout << "Elemen ke-" <<(i+1) <<": ";
        cin >> array[i];
      }
      max= array[0];
      for(i = 0; i < tot; i++) {
        if (array[i] > max)  {
          max = array[i];
          lokasi = i+1;
        }
      }
      cout << "Nilai maksimum adalah " << max << " berada di elemen ke " << lokasi << endl;
      cout << "Alamat maksimum : " << &a;
    }
