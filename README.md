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
  <li><a href="#modul5">Modul 5 - Flow Control (Decision Making)</a></li>
  <li><a href="#modul6">Modul 6 - Flow Control (Looping)</a></li>
  <li><a href="#modul7">Modul 7 - Array</a></li>
  <li><a href="#modul8">Modul 8 - Fungsi dan Prosedur</a></li>
  <li><a href="#modul9">Modul 9 - Pointer</a></li>
  <li><a href="#modul10">Modul 10 - Enumerasi dan Structure</a></li>
 <li><a href="#modul11">Modul 11 - File Handling in C</a></li>
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
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
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
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
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
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
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

Berikut adalah contoh penggunaan operator penugasan:
```C
int a = 10;

// Penugasan sederhana
a = 5;
printf("Nilai a = %d\n", a); // Nilai a = 5

// Penambahan
a += 5;
printf("Nilai a = %d\n", a); // Nilai a = 10

// Pengurangan
a -= 5;
printf("Nilai a = %d\n", a); // Nilai a = 5

// Perkalian
a *= 5;
printf("Nilai a = %d\n", a); // Nilai a = 25

// Pembagian
a /= 5;
printf("Nilai a = %d\n", a); // Nilai a = 5

// Sisa bagi
a %= 5;
printf("Nilai a = %d\n", a); // Nilai a = 0
```

### Operator Pembanding
Operator pembanding digunakan untuk membandingkan nilai dua variabel.

Berikut adalah operator pembanding dalam bahasa C:
|   Operator	  | Deskripsi     |
| ------------- | ------------- |
|     `==`   	  | Sama dengan       |
|     `!=`       | Tidak sama dengan  |
|     `>`       | Lebih besar dari  |
|     `<`       | Lebih kecil dari    |
|     `>=`       | Lebih besar dari atau sama dengan |
|     `<=`       | Lebih kecil dari atau sama dengan |

Berikut adalah contoh penggunaan operator pembanding:
```c
int a = 10;
int b = 5;

// Sama dengan
int c = (a == b);
printf("Nilai c = %d\n", c); // Nilai c = 0

// Tidak sama dengan
int d = (a != b);
printf("Nilai d = %d\n", d); // Nilai d = 1

// Lebih besar dari
int e = (a > b);
printf("Nilai e = %d\n", e); // Nilai e = 1

// Lebih kecil dari
int f = (a < b);
printf("Nilai f = %d\n", f); // Nilai f = 0

// Lebih besar dari atau sama dengan
int g = (a >= b);
printf("Nilai g = %d\n", g); // Nilai g = 1

// Lebih kecil dari atau sama dengan
int h = (a <= b);
printf("Nilai h = %d\n", h); // Nilai h = 0
```

### Operator Logika
Operator logika digunakan untuk menggabungkan hasil dari dua atau lebih operator pembanding.

Berikut adalah operator logika dalam bahasa C:
|   Operator	  | Deskripsi     |
| ------------- | ------------- |
|     `&&`   	  | AND    |
|     `       | ` |
|     `!`       | NOT  |

Berikut adalah contoh penggunaan operator logika:
```c
int a = 10;
int b = 5;

// AND
int c = (a > b) && (a < 15);
printf("Nilai c = %d\n", c); // Nilai c = 1

// OR
int d = (a > b) || (a < 15);
printf("Nilai d = %d\n", d); // Nilai d = 1

// NOT
int e = !(a > b);
printf("Nilai e = %d\n", e); // Nilai e = 1
```

### Operator Bitwise
Operator bitwise digunakan untuk memanipulasi bit-bit dari suatu variabel.

Berikut adalah operator bitwise dalam bahasa C:
|   Operator	  | Deskripsi     |
| ------------- | ------------- |
|     `&`   	  | AND       |
|     `      | `  |
|     `^`       | XOR  |
|     `~`       | NOT    |
|     `<<`       | Shift Kiri |
|     `>>`       | Shift kanan |

Berikut adalah contoh penggunaan operator bitwise:
```c
int a = 10; // 00001010
int b = 5; // 00000101

// AND
int c = a & b; // 00000100
printf("Nilai c = %d\n", c); // Nilai c = 4

// OR
int d = a | b; // 00001111
printf("Nilai d = %d\n", d); // Nilai d = 15

// XOR
int e = a ^ b; // 00001011
printf("Nilai e = %d\n", e); // Nilai e = 11

// NOT
int f = ~a; // 11110101
printf("Nilai f = %d\n", f); // Nilai f = -11

// Shift kiri
int g = a << 2; // 00101000
printf("Nilai g = %d\n", g); // Nilai g = 40

// Shift kanan
int h = a >> 2; // 00000101
printf("Nilai h = %d\n", h); // Nilai h = 5
```

### Operator Kondisional

Operator kondisional digunakan untuk memilih blok kode yang akan dieksekusi berdasarkan kondisi tertentu.

Operator kondisional dalam bahasa C adalah `if-else`.

Berikut adalah sintaks operator `if-else`:
```c
if (kondisi) {
  // Blok kode jika kondisi terpenuhi
} else {
  // Blok kode jika kondisi tidak terpenuhi
}
```
Berikut adalah contoh penggunaan operator `if-else`:
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b
if (a > b) {
  printf("a lebih besar dari b\n");
} else {
  printf("b lebih besar dari a atau a sama dengan b\n");
}
```

Operator kondisional `if-else` dapat digunakan secara bersarang, yaitu dengan menggunakan operator `if-else` di dalam blok kode `if-else` lainnya.

Berikut adalah contoh penggunaan operator `if-else` bersarang:
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b, jika ya, tentukan apakah a lebih besar dari 15
if (a > b) {
  if (a > 15) {
    printf("a lebih besar dari b dan lebih besar dari 15\n");
  } else {
    printf("a lebih besar dari b, tetapi tidak lebih besar dari 15\n");
  }
} else {
  printf("b lebih besar dari a atau a sama dengan b\n");
}
```

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul5">5. Flow Control (Decision Making)</h1>

### If
Pernyataan if digunakan untuk mengeksekusi blok kode jika kondisi tertentu terpenuhi.

Sintaks pernyataan if:
```c
if (kondisi) {
  // Blok kode yang akan dieksekusi jika kondisi terpenuhi
}
```
Example :
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b
if (a > b) {
  printf("a lebih besar dari b\n");
}
```

### If Else
Pernyataan if else digunakan untuk mengeksekusi blok kode jika kondisi tertentu terpenuhi, atau blok kode yang berbeda jika kondisi tidak terpenuhi.

Sintaks pernyataan if else:
```c
if (kondisi) {
  // Blok kode yang akan dieksekusi jika kondisi terpenuhi
} else {
  // Blok kode yang akan dieksekusi jika kondisi tidak terpenuhi
}
```
Example :
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b
if (a > b) {
  printf("a lebih besar dari b\n");
} else {
  printf("b lebih besar dari a atau a sama dengan b\n");
}
```

### Switch Case
Pernyataan switch case digunakan untuk mengeksekusi blok kode berdasarkan nilai suatu variabel.

Sintaks pernyataan switch case:
```c
switch (variabel) {
  case nilai1:
    // Blok kode yang akan dieksekusi jika variabel bernilai nilai1
    break;
  case nilai2:
    // Blok kode yang akan dieksekusi jika variabel bernilai nilai2
    break;
  // ...
  default:
    // Blok kode yang akan dieksekusi jika variabel tidak memiliki nilai yang cocok
    break;
}
```
Example :
```c
int a = 10;

// Menentukan nilai a
switch (a) {
  case 1:
    printf("a bernilai 1\n");
    break;
  case 2:
    printf("a bernilai 2\n");
    break;
  case 3:
    printf("a bernilai 3\n");
    break;
  default:
    printf("a tidak memiliki nilai yang cocok\n");
    break;
}
```
### Operator Ternary
Operator ternary digunakan untuk mengeksekusi blok kode berdasarkan kondisi tertentu.

Sintaks operator ternary:
```c
ekspresi ? nilai_jika_benar : nilai_jika_salah;
```
Example :
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b
int hasil = (a > b) ? 1 : 0;

printf("a lebih besar dari b: %d\n", hasil);
```
### Percabangan Bersarang (Nested)
Percabangan bersarang adalah penggunaan percabangan di dalam percabangan lainnya.

Example :
```c
int a = 10;
int b = 5;

// Menentukan apakah a lebih besar dari b, jika ya, tentukan apakah a lebih besar dari 15
if (a > b) {
  if (a > 15) {
    printf("a lebih besar dari b dan lebih besar dari 15\n");
  } else {
    printf("a lebih besar dari b, tetapi tidak lebih besar dari 15\n");
  }
} else {
  printf("b lebih besar dari a atau a sama dengan b\n");
}
```
Pada contoh di atas, percabangan if pertama digunakan untuk menentukan apakah a lebih besar dari b. Jika ya, maka percabangan if kedua akan dieksekusi. Percabangan if kedua digunakan untuk menentukan apakah a lebih besar dari 15.

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul6">6. Flow Control (Looping)</h1>

### Perulangan for
Perulangan for digunakan untuk mengeksekusi blok kode tertentu secara berulang-ulang, dengan jumlah pengulangan yang telah ditentukan.

Sintaks perulangan for:
```C
for (inisialisasi; kondisi; iterasi) {
  // Blok kode yang akan dieksekusi secara berulang-ulang
}
```
Bagian-bagian dari sintaksis perulangan for adalah sebagai berikut:
- Inisialisasi: Bagian ini digunakan untuk menginisialisasi variabel yang digunakan untuk mengendalikan pengulangan.
- Kondisi: Bagian ini digunakan untuk menentukan apakah pengulangan akan dilanjutkan atau dihentikan.
- Iterasi: Bagian ini digunakan untuk mengubah nilai variabel yang digunakan untuk mengendalikan pengulangan.

*Example :*
```c
// Mencetak angka dari 1 hingga 10
for (int i = 1; i <= 10; i++) {
  printf("%d\n", i);
}
```
Pada contoh di atas, perulangan for akan dieksekusi 10 kali, dengan nilai i dimulai dari 1 dan diakhiri dengan 10.

### Perulangan while
Perulangan while digunakan untuk mengeksekusi blok kode tertentu secara berulang-ulang, selama kondisi tertentu terpenuhi.

Sintaks perulangan while:
```c
while (kondisi) {
  // Blok kode yang akan dieksekusi secara berulang-ulang
}
```
Pada contoh di atas, perulangan while akan dieksekusi selama kondisi terpenuhi.
Example :
```c
// Mencetak angka dari 1 hingga 10
int i = 1;
while (i <= 10) {
  printf("%d\n", i);
  i++;
}
```
Pada contoh di atas, perulangan while akan dieksekusi selama nilai i kurang dari atau sama dengan 10.

### Perulangan Do While
Perulangan do while digunakan untuk mengeksekusi blok kode tertentu secara berulang-ulang, setidaknya satu kali, selama kondisi tertentu terpenuhi.

Sintaks perulangan do while:
```c
do {
  // Blok kode yang akan dieksekusi secara berulang-ulang
} while (kondisi);
```
Pada contoh di atas, perulangan do while akan dieksekusi setidaknya satu kali, kemudian kondisi akan diperiksa. Jika kondisi terpenuhi, maka blok kode akan dieksekusi kembali.
Example :
```c
// Mencetak angka dari 1 hingga 10
int i = 1;
do {
  printf("%d\n", i);
  i++;
} while (i <= 10);
```
Pada contoh di atas, perulangan do while akan dieksekusi setidaknya satu kali, yaitu untuk mencetak angka 1. Kemudian, kondisi akan diperiksa. Jika kondisi terpenuhi, maka blok kode akan dieksekusi kembali untuk mencetak angka 2, dan seterusnya.

### Perulangan Bersarang (Nested Loop)
Perulangan bersarang adalah penggunaan perulangan di dalam perulangan lainnya.
Example : 
```c
// Mencetak segitiga Pascal
for (int i = 0; i < 10; i++) {
  for (int j = 0; j <= i; j++) {
    printf("%d ", (i + 1) - j);
  }
  printf("\n");
}
```
Pada contoh di atas, perulangan luar digunakan untuk mencetak baris-baris dari segitiga Pascal. Perulangan dalam digunakan untuk mencetak angka-angka di setiap baris.

Perulangan bersarang dapat digunakan untuk menyelesaikan berbagai macam masalah, seperti:
- Mencetak pola
- Mengurutkan data
- Mencari data
- Menghitung luas, volume, atau keliling suatu objek

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul7">7. Array</h1>

### Pengertian Array
Array adalah struktur data yang digunakan untuk menyimpan kumpulan data dengan tipe data yang sama. Array dideklarasikan dengan menggunakan tipe data dan nama array, diikuti dengan tanda kurung siku.

Berikut adalah contoh deklarasi array:
```c
int angka[10]; // Array yang menyimpan 10 bilangan bulat
char nama[20]; // Array yang menyimpan 20 karakter
```
Array dapat diakses menggunakan indeks, yaitu bilangan bulat yang menunjukkan posisi elemen array. Indeks dimulai dari 0.
Example :
```c
// Mencetak angka ke-5 dari array angka
printf("%d\n", angka[4]);

// Mencetak karakter ke-10 dari array nama
printf("%c\n", nama[9]);
```

### Penggunaan Array
Array dapat digunakan untuk berbagai macam keperluan, seperti:
- Menyimpan kumpulan data
- Mengurutkan data
- Mencari data
- Menghitung rata-rata data
- Menghitung total data

Berikut adalah beberapa contoh penggunaan array:
#### Menyimpan kumpulan data
Array dapat digunakan untuk menyimpan kumpulan data, seperti nama, umur, nilai, atau hasil tes.
Example :
```c
// Mendeklarasikan array nama
char nama[10][20];

// Mengisi array nama
for (int i = 0; i < 10; i++) {
  printf("Masukkan nama ke-%d: ", i + 1);
  scanf("%s", nama[i]);
}

// Mencetak array nama
for (int i = 0; i < 10; i++) {
  printf("Nama ke-%d: %s\n", i + 1, nama[i]);
}
```

#### Mengurutkan data
Array dapat digunakan untuk mengurutkan data, seperti nama, umur, nilai, atau hasil tes.
Example :
```c
// Mendeklarasikan array angka
int angka[10];

// Mengisi array angka
for (int i = 0; i < 10; i++) {
  printf("Masukkan angka ke-%d: ", i + 1);
  scanf("%d", &angka[i]);
}

// Mengurutkan array angka
for (int i = 0; i < 9; i++) {
  for (int j = i + 1; j < 10; j++) {
    if (angka[i] > angka[j]) {
      int temp = angka[i];
      angka[i] = angka[j];
      angka[j] = temp;
    }
  }
}

// Mencetak array angka yang telah diurutkan
for (int i = 0; i < 10; i++) {
  printf("%d ", angka[i]);
}
```

#### Mencari data
Array dapat digunakan untuk mencari data, seperti nama, umur, nilai, atau hasil tes.
Example :
```c
// Mendeklarasikan array nama
char nama[10][20];

// Mengisi array nama
for (int i = 0; i < 10; i++) {
  printf("Masukkan nama ke-%d: ", i + 1);
  scanf("%s", nama[i]);
}

// Mencari nama "Andi" di array nama
int indeks = -1;
for (int i = 0; i < 10; i++) {
  if (strcmp(nama[i], "Andi") == 0) {
    indeks = i;
    break;
  }
}

// Mencetak hasil pencarian
if (indeks == -1) {
  printf("Nama 'Andi' tidak ditemukan.\n");
} else {
  printf("Nama 'Andi' ditemukan pada indeks ke-%d.\n", indeks);
}
```

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul8">8. Fungsi dan Prosedur</h1>

### Pengertian Fungsi
Fungsi adalah blok kode yang dapat digunakan untuk melakukan tugas tertentu. Fungsi dapat digunakan untuk membagi kode menjadi bagian-bagian yang lebih kecil dan lebih mudah dikelola.

Fungsi dideklarasikan dengan menggunakan kata kunci `int`, `char`, atau `void`, diikuti dengan nama fungsi, tanda kurung, dan daftar parameter. <br>
Example :
```c
// Fungsi yang mengembalikan nilai integer
int tambah(int a, int b) {
  return a + b;
}

// Fungsi yang tidak mengembalikan nilai
void cetak(char *str) {
  printf("%s\n", str);
}
```

### Penggunaan Fungsi
Fungsi dapat digunakan dengan memanggilnya menggunakan nama fungsi, diikuti dengan daftar argumen.

Example :
```c
int a = 10;
int b = 20;

// Memanggil fungsi tambah
int hasil = tambah(a, b);

// Mencetak hasil
printf("Hasil: %d\n", hasil);

// Memanggil fungsi cetak
cetak("Halo, dunia!");
```

### Fungsi rekursif
Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri. Fungsi rekursif dapat digunakan untuk menyelesaikan masalah yang melibatkan iterasi.

Example :
```c
// Fungsi faktorial
int faktorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * faktorial(n - 1);
  }
}
```
### Variabel Lokal & Global
- Variabel lokal : variabel yang hanya dapat diakses di dalam fungsi di mana variabel tersebut dideklarasikan.
- Variabel global : variabel yang dapat diakses di seluruh program.

Example :
```c
// Variabel lokal
int fungsi(void) {
  int a = 10;
  return a;
}

// Variabel global
int a = 10;

int main(void) {
  // Variabel lokal
  int b = fungsi();

  // Variabel global
  a = 20;

  printf("Nilai a: %d\n", a);
  printf("Nilai b: %d\n", b);

  return 0;
}
```
### Pass by Value
Pass by value adalah metode pengiriman nilai parameter ke fungsi. Ketika parameter dikirimkan dengan cara pass by value, maka nilai parameter disalin ke variabel lokal di dalam fungsi.

Example :
```c
// Fungsi yang mengubah nilai parameter
void ubah(int *a) {
  *a = 10;
}

int main(void) {
  int a = 5;

  // Mengubah nilai a
  ubah(&a);

  // Mencetak nilai a
  printf("Nilai a: %d\n", a);

  return 0;
}
```

### Pass by Reference
Pass by reference adalah metode pengiriman alamat parameter ke fungsi. Ketika parameter dikirimkan dengan cara pass by reference, maka fungsi dapat mengakses dan mengubah nilai parameter asli.

Example :
```c
// Fungsi yang mengubah nilai parameter
void ubah(int *a) {
  *a = 10;
}

int main(void) {
  int a = 5;

  // Mengubah nilai a
  ubah(&a);

  // Mencetak nilai a
  printf("Nilai a: %d\n", a);

  return 0;
}
```

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul9">9. Pointer</h1>

### Pengertian Pointer
Pointer adalah sebuah variabel yang menyimpan alamat memori dari variabel lain. Dengan kata lain, pointer adalah variabel yang berisikan alamat memori dari variabel lain.

Untuk mendeklarasikan pointer, kita perlu menambahkan tanda asterisk (*) di depan nama variabel.

Example :
```c
int *p;
```
### Penggunaan Pointer
- Melewatkan nilai variabel ke fungsi-
- Mengakses elemen array
- Mengalokasikan memori secara dinamis

### Pointer untuk pass by reference
Pass by reference adalah teknik untuk meneruskan nilai variabel ke fungsi dengan cara memberikan alamat memori variabel tersebut. Dengan pass by reference, perubahan nilai variabel di dalam fungsi akan berpengaruh pada nilai variabel aslinya.

Untuk menggunakan pointer untuk pass by reference, kita perlu menggunakan operator `&` untuk mengambil alamat memori variabel.

Example :
```c
void ubahNilai(int *x) {
  *x = 10;
}

int main() {
  int a = 5;

  ubahNilai(&a);

  printf("Nilai a: %d\n", a);

  return 0;
}
```
Pada program di atas, fungsi `ubahNilai()` menerima parameter `x` yang bertipe `int` dan berisi alamat memori variabel `int`. Di dalam fungsi, nilai variabel `x` diubah menjadi 10.

Saat fungsi `ubahNilai()` kembali, nilai variabel `a` juga akan berubah menjadi 10. Hal ini karena perubahan nilai variabel `x` akan berpengaruh pada nilai variabel `a` yang disimpan di alamat memori yang sama.

### Pointer untuk mengakses array
Pointer dapat digunakan untuk mengakses elemen array dengan cara menggunakan operator `*` untuk mendereferensi pointer. 

*Example :*
```c
int a[10];
int *p = a;

printf("%d\n", *p); // Mencetak elemen pertama array

p++;

printf("%d\n", *p); // Mencetak elemen kedua array
```

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul10">10. Enumerasi dan Structure</h1>

### Pengertian Enum
Enum adalah tipe data yang berisi sekumpulan konstanta. Enum termasuk dalam tipe data bentukan, karena tipe data ini dibuat sendiri oleh kita.

Untuk mendeklarasikan enum, kita perlu menggunakan kata kunci `enum` kemudian diikuti dengan nama enum dan isinya. 

### Pengertian Structure
Struct adalah tipe data yang menggabungkan beberapa variabel dengan tipe data yang berbeda dalam satu variabel. Struct juga dikenal dengan records dalam bahasa pemrograman lain seperti Pascal.

Untuk mendeklarasikan struct, kita perlu menggunakan kata kunci `struct` kemudian diikuti dengan nama struct dan isinya. 

### Penggunaan Enum
- Mendefinisikan konstanta dengan lebih ringkas
- Mengurangi redundansi kode
- Meningkatkan keterbacaan kode

Example :
```c
enum level {MUDAH, SEDANG, SUSAH};

void main() {
  enum level level = MUDAH;

  switch (level) {
    case EASY:
      printf("Level: Mudah\n");
      break;
    case NORMAL:
      printf("Level: Sedang\n");
      break;
    case HARD:
      printf("Level: Sulit\n");
      break;
  }
}
```

### Penggunan Struct
- Menyimpan data dari berbagai tipe data dalam satu variabel
- Memudahkan akses ke data
- Meningkatkan keterbacaan kode

Example :
```c
struct mahasiswa {
  char *nama;
  int nim;
  float ipk;
};

void main() {
  struct mahasiswa mhs1;

  mhs1.nama = "Andi";
  mhs1.nim = 1234567890;
  mhs1.ipk = 3.90;

  printf("Nama: %s\n", mhs1.nama);
  printf("NIM: %d\n", mhs1.nim);
  printf("IPK: %.2f\n", mhs1.ipk);
}
```

### Penggunaan typedef pada Struct
Typedef adalah tipe data baru yang dibuat berdasarkan tipe data yang sudah ada. Typedef dapat digunakan untuk membuat nama alias untuk tipe data yang sudah ada.

Untuk menggunakan typedef pada struct, kita perlu menggunakan kata kunci `typedef` kemudian diikuti dengan nama alias dan nama struct. 

Example:
```c
typedef struct mahasiswa {
  char *nama;
  int nim;
  float ipk;
} mahasiswa;
```

### Struct Bersarang
Struct dapat bersarang, yaitu struct di dalam struct. Struct bersarang dapat digunakan untuk menggabungkan data dari berbagai struct dalam satu variabel.

Example :
```c
struct mahasiswa {
  char *nama;
  int nim;
  float ipk;
};

struct prodi {
  char *nama;
  struct mahasiswa *mahasiswa;
};
```

<div align="center">
  <a href="#navigator"><kbd> <br> Kembali <br> </kbd></a>
</div>

---
<h1 id="modul11">11. File Handling in C</h1>

### 
