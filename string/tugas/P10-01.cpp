#include <iostream>
#include <cstring>  // Pustaka untuk fungsi string
#include <cstdlib>  // Pustaka untuk fungsi atoi dan atof

using namespace std;

int main() {
    // Deklarasi string untuk contoh
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "HELLO WORLD";
    char str4[50];
    char strNum[] = "12345";
    char strFloat[] = "123.45";

    // 1. strlen(): Menghitung panjang string
    cout << "Panjang str1: " << strlen(str1) << endl;

    // 2. strcat(): Menggabungkan dua string
    strcat(str1, str2);
    cout << "Hasil strcat: " << str1 << endl;

    // 3. strcmp(): Membandingkan dua string
    cout << "Hasil strcmp(str1, str2): " << strcmp(str1, str2) << endl;

    // 4. strlwr(): Mengubah string menjadi huruf kecil (gunakan tolower dalam loop karena strlwr tidak standar di C++)
    for(int i = 0; str3[i]; i++){
        str3[i] = tolower(str3[i]);
    }
    cout << "Hasil strlwr: " << str3 << endl;

    // 5. strupr(): Mengubah string menjadi huruf besar (gunakan toupper dalam loop karena strupr tidak standar di C++)
    for(int i = 0; str2[i]; i++){
        str2[i] = toupper(str2[i]);
    }
    cout << "Hasil strupr: " << str2 << endl;

    // 6. strchr(): Mencari karakter dalam string
    char *chr = strchr(str1, 'W');
    if (chr) {
        cout << "Karakter 'W' ditemukan pada posisi: " << chr - str1 << endl;
    } else {
        cout << "Karakter 'W' tidak ditemukan" << endl;
    }

    // 7. strstr(): Mencari substring dalam string
    char *substr = strstr(str1, "World");
    if (substr) {
        cout << "Substring 'World' ditemukan: " << substr << endl;
    } else {
        cout << "Substring 'World' tidak ditemukan" << endl;
    }

    // 8. strrev(): Membalik string (fungsi tidak standar, sehingga implementasi manual)
    int len = strlen(str1);
    for(int i = 0; i < len / 2; i++) {
        swap(str1[i], str1[len - i - 1]);
    }
    cout << "Hasil strrev: " << str1 << endl;

    // 9. atoi(): Mengonversi string menjadi integer
    int num = atoi(strNum);
    cout << "Hasil atoi: " << num << endl;

    // 10. atof(): Mengonversi string menjadi float
    float fnum = atof(strFloat);
    cout << "Hasil atof: " << fnum << endl;

    cin.get();
}