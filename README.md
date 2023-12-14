# [![UNP](https://unp.ac.id/nfs-assets/all/images/logo_unp_white.png)](https://unp.ac.id/)

# Biodata Diri
<table>
<tr>
<td>
<b><pre>
N A M A                   : F a t t a n  N a u f a n  I s l a m i<br>
N I M                     : 2 3 3 4 3 0 3 7<br>
P r o g r a m   S t u d i : I n f o r m a t i k a<br>
</pre></b>
</td>
</tr>
</table>

# Praktikum Algoritma dan Pemrograman
`🧑‍🏫️ Dosen : Randi Proska Sandra, M.Sc` <br>
`📋 Kode Kelas : INF1.62.1008` <br>
`📑 Semester : 1` <br>

Repositori ini berisi semua tugas praktikum algoritma pemrograman. Pada mata kuliah ini mahasiswa mempelajari tentang prinsip, konsep dan metode dalam menyelesaikan masalah komputasi yang akan digunakan dalam pembuatan suatu aplikasi sederhana. Mahasiswa mempelajari konsep dasar komputer dan sistem komputer, penulisan algoritma program, tipe data, pengenal, operator, struktur program, pemrograman modular, fungsi dan prosedur serta pencarian dan pengurutan data.

<h2 id="navigator">Modul</h2>
<list>
  <li><a href="#modul1">Modul 1 - Pengantar Algoritma dan Pemrograman</a></li>
  <li><a href="#modul2">Modul 2 - Pemrograman Dasar C</a></li>
  <li><a href="#modul3">Modul 3 - Variabel, Konstanta dan Tipe Data</a></li>
  <li><a href="#modul4">Modul 4 - Operator</a></li>
  <li><a href="Modul 5 - Flow Control (Decision Making)">Modul 5 - Flow Control (Decision Making)</a></li>
  <li><a href="Modul 6 - Flow Control (Looping)">Modul 6 - Flow Control (Looping)</a></li>
  <li><a href="Modul 7 - Array">Modul 7 - Array</a></li>
  <li><a href="Modul 8 - Fungsi dan Prosedur">Modul 8 - Fungsi dan Prosedur</a></li>
  <li><a href="Modul 9 - Pointer">Modul 9 - Pointer</a></li>
  <li><a href="Modul 10 - Enumerasi dan Structure">Modul 10 - Enumerasi dan Structure</a></li>
 <li><a href="Modul 11 - File Handling in C">Modul 11 - File Handling in C</a></li>
</list>

---
<h1 id="modul1">1. Pengantar Algoritma Pemograman</h1>

### Algoritma & Pemrograman

- Algoritma adalah serangkaian langkah atau instruksi yang disusun secara sistematis dan logis untuk menyelesaikan suatu masalah. Dalam pemrograman komputer, algoritma digunakan untuk menentukan alur logika program.
- Pemrograman adalah proses penulisan kode untuk membuat program komputer. Proses ini meliputi penyusunan algoritma, penulisan kode, dan pengujian program.

Algoritma pemrograman dapat ditulis dalam berbagai bentuk, yaitu:
- Pseudocode: Pseudocode adalah algoritma yang ditulis dalam bahasa alami, tetapi menggunakan simbol-simbol tertentu untuk mewakili langkah-langkah algoritma.
- Prosedur: Prosedur adalah algoritma yang ditulis dalam bahasa pemrograman tertentu. <br>

### Pengenalan Bahasa C
- Bahasa C adalah bahasa pemrograman tingkat tinggi yang digunakan untuk berbagai macam keperluan, mulai dari sistem operasi, aplikasi, hingga perangkat keras. Bahasa C memiliki sintaks yang sederhana dan mudah dipelajari, sehingga cocok untuk pemula.
- C adalah bahasa pemrograman tingkat menengah yang dikembangkan pertama kali oleh Dennis Ritchie pada awal tahun 1970-an. Bahasa C memiliki sintaks yang relatif sederhana dan memberikan kontrol yang tinggi terhadap perangkat keras komputer.

### IDE & Instalasi

IDE (Integrated Development Environment) adalah perangkat lunak yang digunakan untuk menulis, mengedit, dan mengompilasi kode program. IDE dapat memudahkan programmer dalam menulis program, karena menyediakan berbagai macam fitur yang mendukung proses pemrograman, antara lain:

- Editor: Editor untuk menulis kode program.
- Kompiler: Kompiler untuk mengompilasi kode sumber menjadi kode mesin.
- Debugger: Debugger untuk memeriksa kesalahan dalam program.
- Linters: Linter untuk memeriksa kode program untuk potensi kesalahan.

### Contoh IDE
Ada banyak IDE yang tersedia untuk bahasa C, antara lain:
- Dev-C++: IDE gratis dan open source yang populer untuk bahasa C.
- Code::Blocks: IDE gratis dan open source yang juga populer untuk bahasa C.
- Visual Studio: IDE berbayar yang dikembangkan oleh Microsoft.
- Xcode: IDE berbayar yang dikembangkan oleh Apple.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="modul2">2. Pemrograman Dasar C</h1>

### Struktur dasar program C terdiri dari tiga bagian utama, yaitu:
- Judul program: Bagian ini berisi nama program dan keterangan singkat tentang program.
- Header file: Bagian ini berisi deklarasi fungsi-fungsi yang akan digunakan dalam program.
- Deklarasi: Bagian ini berisi deklarasi variabel, konstanta, dan tipe data yang akan digunakan dalam program.
- Deskripsi: Bagian ini berisi inti program, yaitu langkah-langkah penyelesaian masalah.

Judul program ditulis dalam bentuk komentar. Komentar dalam C dimulai dengan tanda pagar `(#)` diikuti dengan teks komentar.

Header file ditulis dengan menggunakan preprocessor directive `#include`. Preprocessor directive adalah bagian dari kode program yang akan dieksekusi oleh preprocessor sebelum kode program dijalankan.

Deklarasi ditulis dengan menggunakan keyword `int`, `char`, `float`, `double`, atau `struct`.

Deskripsi ditulis dengan menggunakan blok kode yang diawali dengan tanda kurung kurawal buka `{` dan diakhiri dengan tanda kurung kurawal tutup `}`.

*Example :*

```c
/* Program Hello World */

#include <stdio.h>

int main() {
  /* Deklarasi variabel */
  int a = 10;
  char b = 'A';

  /* Deskripsi */
  printf("Nilai a = %d\n", a);
  printf("Nilai b = %c\n", b);

  return 0;
}
```
Pada contoh program di atas, struktur dasar program C terdiri dari:

- Judul program: "Program Hello World"
- Header file: <stdio.h>
- Deklarasi:
  - Variabel a dengan tipe data int
  - Variabel b dengan tipe data char
- Deskripsi:
  - Mencetak nilai variabel a ke layar
  - Mencetak nilai variabel b ke layar

### Proses Input & Output

Proses input dan output adalah salah satu proses penting dalam pemrograman. Proses input digunakan untuk memasukkan data dari luar program, sedangkan proses output digunakan untuk menampilkan data ke luar program. <br>

Dalam bahasa C, proses input dan output dapat dilakukan dengan menggunakan fungsi-fungsi standar yang tersedia dalam header file `stdio.h`.

### Fungsi input

Berikut adalah beberapa fungsi input yang tersedia dalam header file stdio.h:
- `scanf()`: Fungsi untuk membaca data dari keyboard.
- `getchar()`: Fungsi untuk membaca satu karakter dari keyboard.

### Fungsi output

Berikut adalah beberapa fungsi output yang tersedia dalam header file `stdio.h`:
- `printf()`: Fungsi untuk menampilkan teks ke layar.
- `putchar()`: Fungsi untuk menampilkan satu karakter ke layar.

*Example :*

```c
/* Program input dan output */

#include <stdio.h>

int main() {
  /* Input */
  int a;
  printf("Masukkan nilai a: ");
  scanf("%d", &a);

  /* Output */
  printf("Nilai a = %d\n", a);

  return 0;
}
```
Pada contoh program di atas, fungsi `scanf()` digunakan untuk membaca nilai variabel `a` dari keyboard. Nilai variabel `a` kemudian ditampilkan ke layar menggunakan fungsi `printf()`.
Proses input dan output dapat dilakukan dengan berbagai cara, tergantung pada kebutuhan program.
<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="modul3">3. Variabel, Konstanta dan Tipe Data</h1>

### Variabel & Konstanta
- Variabel adalah tempat penyimpanan data dalam memori komputer. Variabel dapat digunakan untuk menyimpan berbagai macam data, seperti angka, huruf, karakter, atau bilangan kompleks.

- Konstanta adalah nilai yang tidak dapat diubah selama program berjalan. Konstanta biasanya digunakan untuk menyimpan nilai-nilai yang tidak berubah, seperti konstanta fisika atau konstanta matematika.

### Deklarasi Variabel
Variabel dideklarasikan dengan menggunakan keyword 
- `int` 
- `char` 
- `float` 
- `double`  
- `struct`

Berikut adalah contoh deklarasi variabel:

```c
int a; // variabel integer
char b; // variabel karakter
float c; // variabel floating-point
double d; // variabel double-precision floating-point
struct s { // variabel struktur
  int x;
  char y;
};
```

### Akses Variabel
Nilai variabel dapat diakses dengan menggunakan operator `.` atau `->`.

Operator `.` digunakan untuk mengakses anggota variabel struktur.

Operator `->` digunakan untuk mengakses anggota variabel struktur secara langsung.

Berikut adalah contoh akses variabel:

```c
int a = 10;
char b = 'A';
float c = 3.14;
double d = 2.71828;
struct s s = {1, 'B'};

// Akses variabel a
printf("Nilai a = %d\n", a);

// Akses variabel b
printf("Nilai b = %c\n", b);

// Akses variabel c
printf("Nilai c = %f\n", c);

// Akses variabel d
printf("Nilai d = %lf\n", d);

// Akses anggota variabel s
printf("Nilai s.x = %d\n", s.x);
printf("Nilai s.y = %c\n", s.y);
```

### Nilai Awal Variabel
Nilai awal variabel dapat ditentukan saat deklarasi variabel.

Berikut adalah contoh nilai awal variabel:
```c
int a = 10; // nilai awal variabel a = 10
char b = 'A'; // nilai awal variabel b = 'A'
float c = 3.14; // nilai awal variabel c = 3.14
double d = 2.71828; // nilai awal variabel d = 2.71828
```

## Tipe Data Fundamental
Bahasa C memiliki beberapa tipe data fundamental, yaitu:

- `int`: Tipe data integer untuk menyimpan bilangan bulat.
- `char`: Tipe data karakter untuk menyimpan satu karakter.
- `float`: Tipe data floating-point untuk menyimpan bilangan desimal.
- `double`: Tipe data double-precision floating-point untuk menyimpan bilangan desimal dengan presisi yang lebih tinggi dari tipe data `float`.

Berikut adalah tabel ukuran memori untuk tipe data fundamental:

|   Tipe Data	  | Ukuran Memori |
| ------------- | ------------- |
|     `int` 	  | 4 Byte        |
|     `char`    | 1 Byte        |
|     `float`   | 4 Byte        |
|     `double`  | 8 byte        |

## Type Casting
Type casting adalah konversi tipe data dari satu tipe data ke tipe data lainnya.

Type casting dapat dilakukan dengan menggunakan operator `()`.

Berikut adalah contoh type casting:
```c
int a = 10;
float b = 3.14;

// Type casting dari int ke float
float c = (float)a;

// Type casting dari float ke int
int d = (int)b;

// Type casting dari char ke int
int e = (int)'A';

printf("Nilai c = %f\n", c);
printf("Nilai d = %d\n", d);
printf("Nilai e = %d\n", e);
```

## Keywords
Keywords adalah kata kunci yang memiliki arti khusus dalam bahasa pemrograman.

Berikut adalah beberapa contoh keywords dalam bahasa C:
- `int`
- `char`
- `float`
- `double`
- `main()`
- `printf()`
- `scanf()`
- `if()`
- `else()`

Keywords tidak dapat digunakan sebagai nama variabel
<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="modul4">4. Operator</h1>

### Operator Aritmatika
Operator aritmatika digunakan untuk melakukan operasi aritmatika, seperti penjumlahan, pengurangan, perkalian, pembagian, dan sisa bagi

Berikut adalah operator aritmatika dalam bahasa C:
|   Operator	  | Deskripsi     |
| ------------- | ------------- |
|     `+`   	  | Penjumlahan        |
|     `-`       | Pengurangan        |
|     `*`       | Perkalian        |
|     `/`       | Pembagian        |
|     `%`       | Sisa bagi        |

Berikut adalah contoh penggunaan operator aritmatika:

```c
int a = 10;
int b = 5;

// Penjumlahan
int c = a + b;
printf("Nilai c = %d\n", c); // Nilai c = 15

// Pengurangan
int d = a - b;
printf("Nilai d = %d\n", d); // Nilai d = 5

// Perkalian
int e = a * b;
printf("Nilai e = %d\n", e); // Nilai e = 50

// Pembagian
int f = a / b;
printf("Nilai f = %d\n", f); // Nilai f = 2

// Sisa bagi
int g = a % b;
printf("Nilai g = %d\n", g); // Nilai g = 0
```

### Operator Penugasan
Operator penugasan digunakan untuk memberikan nilai ke variabel.

Berikut adalah operator penugasan dalam bahasa C:
|   Operator	  | Deskripsi     |
| ------------- | ------------- |
|     `=`   	  | Penugasan sederhana       |
|     `+=`       | Penjumlaham        |
|     `-=`       | Pengurangan        |
|     `*=`       | Perkalian        |
|     `/=`       | Pembagian        |
|     `%=`       | Sisa bagi        |
