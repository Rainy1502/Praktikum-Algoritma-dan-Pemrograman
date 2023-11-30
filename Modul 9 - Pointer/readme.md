
<!--[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-f4981d0f882b2a3f0472912d15f9806d57e124e0fc890972558857b51b24a6f9.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=10127529)
## Data Structures (Lab Work) Template Guides
1. Buatlah folder untuk masing-masing jobsheet
2. Silakan anda upload file c hasil praktikum anda menggunakan Dev C++ atau IDE/text editor lainnya dengan mengupload button ADD FILE
3. Upload juga screenshot hasil latihan dan tugas anda dalam format .JPG atau .JPEG atau .PNG
4. Upload file pada nomor 2 dan 3 pada masing-masing folder sesuai dengan jobsheet yang dikerjakan
5. Setiap file c anda diharuskan untuk memiliki identitas anda dengan menggunakan komentar dengan format berikut "Created by NIM_Nama Lengkap" pada bagian paling atas setiap code anda. contoh: // Created by 1203232_Randi Proska Sandra
6. Silakan anda edit file README.md ini dengan identitas anda juga serta berikan penjelasan terkait source code yang anda upload. Catatan: Jangan ubah nama file README.md-->
<!--Wahyu Isnan-->

# [![UNP](https://unp.ac.id/nfs-assets/all/images/logo_unp_white.png)](https://unp.ac.id/)
# Universitas Negeri Padang (UNP)

# Biodata Diri
<table>
<tr>
<td>
<b><pre>
N A M A                   : W a h y u   I s n a n<br>
N I M                     : 2 2 3 4 3 0 3 1<br>
P r o g r a m   S t u d i : I n f o r m a t i k a
</pre></b>
</td>
</tr>
</table>

# Laporan Praktikum Struktur Data

## [Jobsheet 1](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%201)

<details><summary><b>Memahami Konsep Data/Variabel, Tipe Data, dan Struktur Data</b></summary>
 
1. Data/Variabel:
 
```
- Memahami konsep data dan variabel adalah langkah awal dalam pemrograman.
- Data merujuk pada informasi yang digunakan dalam program, seperti angka, teks, atau objek.
- Variabel adalah tempat untuk menyimpan data yang dapat diakses dan diubah oleh program.
- Melalui penggunaan variabel, program dapat memanipulasi data sesuai kebutuhan.
```

2. Tipe Data:

```
- Tipe data menentukan jenis nilai yang dapat disimpan dalam variabel.
- Tipe data yang umum digunakan dalam pemrograman meliputi
  + Integer: Digunakan untuk menyimpan angka bulat.
  + Float: Digunakan untuk menyimpan angka pecahan.
  + Character: Digunakan untuk menyimpan karakter, seperti huruf atau simbol.
  + String: Digunakan untuk menyimpan kumpulan karakter.
  + Boolean: Digunakan untuk menyimpan nilai benar atau salah.
- Setiap tipe data memiliki ukuran dan batas nilai yang berbeda-beda.
```

3. Struktur Data:

```
- Struktur data merujuk pada cara pengorganisasian data dalam program.
- Beberapa struktur data umum yang digunakan meliputi:
  + Array: Digunakan untuk menyimpan kumpulan data dengan tipe yang sama, diakses dengan menggunakan indeks.
  + Pointer: Digunakan untuk menyimpan alamat memori suatu variabel, memungkinkan manipulasi langsung terhadap data dan alokasi memori dinamis.
  + Struct: Digunakan untuk menggabungkan beberapa tipe data menjadi satu entitas yang lebih kompleks.
  + Linked List: Digunakan untuk menyimpan dan mengorganisir data dalam bentuk simpul-simpul yang terhubung satu sama lain.
  + Double Linked List: Mirip dengan linked list, namun setiap simpul memiliki referensi ke simpul sebelumnya dan sesudahnya.
  + Circular Linked List: Mirip dengan linked list, namun simpul terakhir terhubung dengan simpul pertama, membentuk lingkaran.
```
</details>

## [Jobsheet 2](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%202)

```
1. Mengenal array, pointer dan struktur data
2. Mempelajari operasi yang digunakan untuk tipe data struct
3. Mempelajaria apa itu ADT ( abstract data type ) atau disebut juga tipe data bentukan
4. Melakukan percobaan program yang ada di jobsheet
5. Memcoba mencari kesalahan pada program yang diberikan di jobsheet 2
6. Mencoba mengerjakan tugas tentang membuat type data struct dari mencari data mahasiswa
7. Input data mahasiswa sampai membuat function untuk menampilkan data mahasiswa
```

## [Jobsheet 3](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%203)

### Percobaan 1

```
- Alokasi Memori
Program ini mencetak ukuran dalam byte dari berbagai tipe data di C, termasuk ukuran struct bernama "Employee"
dengan dua bidang,string bernama "name" dan bilangan bulat bernama "id". Program ini juga mendemonstrasikan penggunaan
operator "sizeof" untuk mendapatkan ukuran tipe data atau variabel dalam byte.
```

### Percobaan 2

```
- Single Link Without Typedef
Program ini mendefinisikan struktur node dan menggunakan alokasi memori dinamis untuk mengalokasikan memori untuk tiga node.
```

### Percobaan 3

```
- Single Link List (typedef)
Program ini hampir sama dengan program sebelumnya, hanya dengan menggunakan typedef untuk mengganti struct LinkedList dengan
nama simpel yaitu "node". typedef digunakan untuk mengganti suatu nama yang lebih mudah digunakan dan memperjelas penggunaan
tipe data struktur pada program. Kemudian program ini juga menggunakan alokasi memori dinamis untuk mengalokasikan memori
untuk tiga node, mengisi data pada setiap node, dan menghubungkan setiap node ke node berikutnya, dengan node ketiga mengarah
ke null sebagai penanda akhir dari linked list.
```

### Percobaan 4

```
- Single Link List
Hanya dengan menggunakan typedef pada struktur LinkedList dan memberikan alias pada struktur tersebut dengan nama simpel
yaitu "node". Struktur tersebut kemudian didefinisikan kembali dengan nama "node" pada typedef statement. Kemudian program
ini juga menggunakan alokasi memori dinamis untuk mengalokasikan memori untuk tiga node.
```

### Percobaan 5

```
- Menampilkan Link List
Hanya dengan menggunakan typedef pada struktur LinkedList dan menghindari penggunaan variabel global. Di program ini,
variabel head, second, dan third didefinisikan di dalam fungsi main. Kemudian program ini menggunakan alokasi memori
dinamis untuk mengalokasikan memori untuk tiga node, mengisi data pada setiap node, dan menghubungkan setiap node ke
node berikutnya.
```

### Percobaan 6

```
- Menampilkan Link List
Program ini hampir sama dengan program sebelumnya, hanya dengan menambahkan fungsi printList yang digunakan untuk mencetak
data pada setiap node pada linked list, dimulai dari node pertama (head) hingga node terakhir (null). Fungsi printList
menggunakan perulangan while untuk mengakses setiap node pada linked list dan mencetak nilai data pada setiap node menggunakan
perintah printf. Setelah itu, program menggunakan alokasi memori dinamis untuk mengalokasikan memori untuk tiga node, mengisi
data pada setiap node, dan menghubungkan setiap node ke node berikutnya.
```

### Percobaan 7

```
- Insertion at Beginning
Ini mendefinisikan struktur data daftar tertaut dan mengimplementasikan operasi push untuk memasukkan elemen baru di awal daftar.
Kemudian itu membuat daftar tertaut dengan memanggil operasi push dua kali dan mencetak isi daftar.
```

### Percobaan 8

```
Ini adalah program C yang membuat daftar tertaut dengan tiga simpul yang berisi bilangan bulat 1, 2, dan 3.
Program ini kemudian membuat simpul baru dengan nilai bilangan bulat 4 dan menyisipkannya di awal daftar tertaut.
Terakhir, ia mencetak isi linked list.
```

### Percobaan 9

```
Ini adalah program C yang membuat daftar tertaut dan melakukan operasi berikut:
•	Menambahkan node dengan nilai data 6 di akhir daftar tertaut menggunakan fungsi append().
•	Menambahkan node dengan nilai data 7 di awal linked list menggunakan fungsi push().
•	Menambahkan node dengan nilai data 1 di awal linked list menggunakan fungsi push().
•	Menambahkan node dengan nilai data 4 di akhir daftar tertaut menggunakan fungsi append().
•	Menambahkan node dengan nilai data 8 setelah node dengan nilai data 7 menggunakan fungsi insertAfter().
•	Mencetak isi linked list menggunakan fungsi printList().
```
 
## [Jobsheet 4](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%204)

### Percobaan 1

```
- Baris 5-9: Mendefinisikan struct Node yang memiliki pointer ke node sebelumnya dan setelahnya.
- Baris 12 : Fungsi "push" yang diberikan merupakan sebuah fungsi yang menambahkan sebuah node baru ke
  awal dari sebuah linked list. Fungsi ini digunakan untuk menambahkan data node baru di depan node lama
- Baris 15 : Fungsi "malloc" digunakan untuk mengalokasikan sejumlah byte dalam memori.
- Baris 27: Fungsi "printList" yang diberikan adalah sebuah fungsi yang digunakan untuk menampilkan isi
  dari sebuah linked list ke layar. Fungsi ini akan menampilkan isi dari setiap node pada linked list secara berurutan.
- Baris 45-46: Menampilkan nama dan NIM pembuat source code.
```

### Percobaan 2

```
- Fungsi push untuk menambahkan elemen baru pada awal linked list.
- Fungsi insertAfter untuk menambahkan elemen baru setelah suatu elemen tertentu.
- Fungsi printList untuk mencetak isi dari linked list, baik secara terurut dari awal maupun dari akhir.

Program ini melakukan operasi sebagai berikut :
- Membuat linked list kosong.
- Memasukkan elemen dengan nilai 6, 5, dan 2 pada linked list dengan memanggil fungsi push.
- Memanggil fungsi insertAfter untuk menambahkan elemen dengan nilai 5 setelah elemen dengan nilai 6.
- Mencetak isi linked list dengan memanggil fungsi printList.
```

### Percobaan 3

```
- Pada fungsi push(), data baru akan ditambahkan pada bagian depan linked list (head). Sedangkan pada fungsi append(),
  data baru akan ditambahkan pada bagian belakang linked list (tail).
- Fungsi printList() digunakan untuk menampilkan isi dari linked list secara urut dari depan ke belakang dan dari belakang ke depan.
- Source code tersebut juga mencakup penggunaan alokasi memori dinamis dengan menggunakan fungsi malloc().
- Setelah linked list terbentuk, fungsi main() akan memanggil fungsi printList() untuk menampilkan isi dari linked list yang sudah terbentuk.
```

### Percobaan 4

```
Source code yang diberikan merupakan implementasi dari Doubly Linked List (DLL) dengan menggunakan bahasa pemrograman C.
DLL adalah salah satu jenis struktur data linked list di mana setiap node memiliki dua pointer, yaitu pointer ke node
sebelumnya (prev) dan pointer ke node selanjutnya (next).

Fungsi-fungsi yang terdapat pada source code tersebut adalah sebagai berikut:
- push: untuk menambahkan elemen baru di awal DLL.
- insertBefore: untuk menambahkan elemen baru sebelum node yang ditunjuk.
- printList: untuk mencetak isi dari DLL.

Pada fungsi main, terdapat inisialisasi awal DLL dengan memanggil fungsi push sebanyak tiga kali dan kemudian memanggil
fungsi insertBefore untuk menambahkan elemen baru sebelum node kedua pada DLL. Setelah itu, memanggil fungsi printList
untuk mencetak isi dari DLL.
```

## [Jobsheet 5](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%205)

```
Double linked list adalah struktur data yang menyimpan elemen dengan dua pointer dalam satu node, yaitu pointer next
dan pointer prev. Setiap elemen pada double linked list terdiri dari tiga bagian, yaitu info, pointer next, dan pointer prev.
Double linked list memungkinkan lintasan maju (ke depan) dan mundur (ke belakang) pada list, serta memiliki fleksibilitas
yang lebih tinggi dibandingkan dengan single linked list.

Circular list adalah bentuk lain dari linked list yang memungkinkan lintasan elemen secara fleksibel. Circular list bisa berupa
single linked list atau double linked list dan tidak memiliki tail. Pada circular list, pointer next dari elemen terakhir menunjuk
ke elemen pertama dan bukan ke NULL.Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.
```

## [Jobsheet 6](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%206)

### Percobaan 1

```
Stack digunakan untuk menyimpan data pada suatu struktur data yang memiliki sifat LIFO (Last In First Out). Pada program ini,
terdapat struct Stack yang merepresentasikan stack dengan variabel-variabel seperti atas (top) dan kapasitas (capacity)
serta array sebagai elemen dari stack itu sendiri.

Terdapat juga fungsi-fungsi seperti isFull (untuk mengecek apakah stack sudah penuh), isEmpty (untuk mengecek apakah stack kosong),
push (untuk menambahkan item ke stack), pop (untuk mengeluarkan item teratas dari stack), dan peek
(untuk melihat item teratas dari stack tanpa mengeluarkannya).

Pada fungsi main, stack diinisialisasi dengan kapasitas 100 dan beberapa item ditambahkan ke dalam stack menggunakan fungsi push.
Kemudian, sebuah item dihapus dari stack menggunakan fungsi pop dan hasilnya ditampilkan pada layar.
```

### Percobaan 2

```
Program ini memiliki beberapa fungsi dasar, yaitu :
1. Push (menambah item ke dalam stack) 
2. Pop (menghapus item teratas dari stack) 
3. Display (menampilkan seluruh item pada stack).

Program ini juga memiliki menu pilihan untuk memudahkan pengguna dalam melakukan operasi pada stack. Stack pada program
ini memiliki ukuran tetap sebesar 5 dan jika stack telah penuh, maka tidak memungkinkan untuk menambahkan item lagi.
Sebaliknya, jika stack kosong, maka tidak memungkinkan untuk menghapus item dari stack.
```

### Percobaan 3

```
Program ini, terdapat struct StackNode yang memiliki dua variabel yaitu data dan next.
- Data merepresentasikan nilai yang akan dimasukkan ke dalam stack dan next merepresentasikan alamat dari node selanjutnya. 
- Selain itu, pada program ini terdapat beberapa fungsi yaitu newNode untuk membuat node baru, isEmpty untuk mengecek apakah
  stack kosong, push untuk menambahkan data ke dalam stack, pop untuk menghapus data dari stack dan mengembalikan nilai yang
  dihapus, dan peek untuk melihat nilai yang berada pada posisi teratas dari stack. 
- Program ini kemudian dijalankan dengan menambahkan beberapa data ke dalam stack menggunakan fungsi push, menghapus nilai
  pada posisi teratas stack menggunakan fungsi pop, dan menampilkan nilai pada posisi teratas stack menggunakan fungsi peek.
```

### Percobaan 4

```
Program ini, terdapat tiga fungsi utama yaitu : 
1. Push untuk menambahkan data ke dalam stack
2. Pop untuk menghapus data dari stack 
3. Tampilkan untuk menampilkan seluruh isi stack.

Struktur data yang digunakan adalah linked list yang terdiri dari node-node yang memiliki data dan pointer next
yang menunjukkan node selanjutnya dalam linked list. Program juga memiliki fitur menu dengan pilihan 1-4, dimana
pengguna dapat memilih operasi yang ingin dilakukan pada stack.
```

### Percobaan 5 

```
Program tersebut merupakan implementasi dari double stack yang menggunakan array dengan ukuran maksimum sebesar 5.
Double stack adalah struktur data yang terdiri dari dua stack yang ditempatkan pada elemen yang sama, namun di dua
ujung berbeda. Program ini memiliki beberapa fungsi utama, yaitu :
1. Fungsi init untuk menginisialisasi double stack.
2. Fungsi pushA untuk menambahkan elemen ke stack pertama.
3. Fungsi pushB untuk menambahkan elemen ke stack kedua.
4. Fungsi popA untuk menghapus elemen dari stack pertama.
5. Fungsi popB untuk menghapus elemen dari stack kedua.

Dalam fungsi main, dilakukan pengujian dengan menambahkan elemen ke stack pertama dan kedua, kemudian menghapus
elemen dari stack tersebut. Program ini juga menampilkan pesan kesalahan jika terjadi stack overflow atau underflow.
```

### Percobaan 6 

```
Program tersebut terdiri dari beberapa fungsi yaitu push, pop, isEmpty, insertAtBottom, reverse, dan print.
- Pada fungsi push, digunakan untuk menambahkan elemen baru ke dalam stack. Fungsi pop digunakan untuk menghapus
  elemen teratas dari stack dan mengembalikan nilainya. Fungsi isEmpty digunakan untuk memeriksa apakah stack kosong atau tidak.
- Fungsi insertAtBottom merupakan fungsi rekursif yang memasukkan elemen baru ke dalam bagian bawah stack. Fungsi reverse
  juga merupakan fungsi rekursif yang digunakan untuk membalikkan isi dari stack dengan menggunakan fungsi insertAtBottom.
  Fungsi print digunakan untuk menampilkan isi dari stack.

Program di atas juga dilengkapi dengan driver code yang digunakan untuk menjalankan program dengan menginisialisasi beberapa elemen
ke dalam stack dan menampilkan isi stack awal. Kemudian program memanggil fungsi reverse untuk membalikkan isi stack dan menampilkan
isi stack yang sudah dibalikkan.
```

#### Latihan 1

```
Program ini memiliki empat fungsi utama untuk mengelola stack, yaitu : 
1. Push (menambahkan elemen ke stack) 
2. Pop (mengambil elemen dari stack) 
3. Peek (melihat elemen teratas di stack)
4. isfull dan isempty untuk mengecek apakah stack penuh atau kosong.
```

#### Latihan 2

```
Program ini memiliki tiga fungsi utama untuk mengelola stack, yaitu : 
1. Push (menambahkan elemen ke stack)
2. Pop (menghapus elemen dari stack)
3. Display (menampilkan seluruh elemen di stack).

Fungsi push akan menambahkan elemen ke stack jika stack belum penuh, dan fungsi pop akan menghapus
elemen teratas dari stack jika stack tidak kosong. Fungsi display akan menampilkan seluruh elemen stack.
Setiap kali pengguna memilih opsi, program akan mengecek apakah stack penuh atau kosong terlebih dahulu,
kemudian melakukan operasi yang sesuai.
```

#### Tugas 1

```
- Program ini adalah sebuah implementasi stack yang dapat menyimpan data mahasiswa, terdiri dari NIM,
  nama, dan nilai. Program ini memiliki beberapa fasilitas seperti push (menambahkan data), pop (mengambil data),
  display (untuk menampilkan data stack), dan sort (pengurutan data berdasarkan nilai).
- Program ini menggunakan array of struct sebagai implementasi dari stack-nya. Variabel top merepresentasikan
  indeks dari elemen teratas pada stack.
- Fungsi push() digunakan untuk menambahkan data mahasiswa ke dalam stack, dengan meminta input NIM, nama,
  dan nilai dari user. Fungsi pop() digunakan untuk menghapus data mahasiswa dari stack, dengan menghapus data
  pada indeks teratas stack. Fungsi display() digunakan untuk menampilkan data mahasiswa pada stack, dengan
  mengeluarkan data dari indeks teratas hingga indeks terbawah. Fungsi sort() digunakan untuk mengurutkan data
  mahasiswa pada stack berdasarkan nilai, dengan menggunakan bubble sort.
- Program ini memiliki fitur keluar dari program dengan memilih pilihan nomor 5 pada menu utama. Program juga
  menampilkan nama dan NIM dari pembuat program pada awal eksekusi.
```

#### Tugas 2

```
- Program ini adalah sebuah program sederhana untuk membalikkan kata yang menggunakan stack sebagai
  struktur data utama. Program ini memiliki tiga menu yaitu input kata, balik kata, dan keluar dari program.
- Pada fungsi main(), pertama-tama stack diinisialisasi menggunakan fungsi initStack() dan variabel choice
  untuk menyimpan pilihan menu oleh pengguna. Selanjutnya, program akan menampilkan menu dan meminta pengguna
  untuk memilih menu. Setiap menu memiliki perintah yang berbeda.
- Jika pengguna memilih menu pertama, maka program akan meminta pengguna memasukkan kata. Kata tersebut kemudian
  akan dimasukkan satu per satu ke dalam stack menggunakan fungsi push().
- Jika pengguna memilih menu kedua, maka program akan mencetak kata yang telah dibalik dengan menggunakan stack.
  Program akan terus membalikkan dan mencetak karakter yang ada di dalam stack sampai stack kosong.
- Jika pengguna memilih menu ketiga, maka program akan keluar.

Fungsi-fungsi yang digunakan dalam program ini meliputi:
1. initStack() untuk menginisialisasi stack dengan menetapkan top ke -1.
2. push() untuk memasukkan karakter ke dalam stack. Fungsi ini akan mengecek apakah stack sudah penuh atau belum,
   jika penuh maka akan mencetak pesan error.
3. pop() untuk mengambil karakter dari stack. Fungsi ini akan mengecek apakah stack kosong atau tidak,
   jika kosong maka akan mencetak pesan error dan mengembalikan karakter kosong.
4. isEmpty() untuk mengecek apakah stack kosong atau tidak. Jika top sama dengan -1, maka stack kosong.
```

## [Jobsheet 7](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%207)

### Percobaan 1

```
Percobaan 1 merupakan implementasi queue menggunakan array pada bahasa pemrograman C.
Program ini memiliki fitur untuk menambahkan elemen ke antrian, menghapus elemen dari antrian,
menampilkan semua elemen dalam antrian, dan keluar dari program.

Pada fungsi tambah(), user diminta untuk memasukkan nilai yang ingin ditambahkan ke antrian.
Jika antrian sudah penuh, maka akan ditampilkan pesan "OVERFLOW". Jika antrian masih kosong,
maka front dan rear akan ditempatkan pada posisi 0. Jika tidak, rear akan ditingkatkan dengan
1 dan nilai item akan dimasukkan ke dalam antrian.

Fungsi hapus() digunakan untuk menghapus elemen pertama dalam antrian. Jika antrian sudah kosong,
maka akan ditampilkan pesan "UNDERFLOW". Jika tidak, elemen pertama dalam antrian akan disimpan pada
variabel item, front akan ditingkatkan dengan 1, dan nilai item akan ditampilkan sebagai elemen yang
dihapus dari antrian.

Fungsi display() akan menampilkan semua elemen dalam antrian. Jika antrian kosong, maka akan ditampilkan
pesan "Antrian kosong". Program ini memiliki kemampuan dasar untuk mengimplementasikan queue menggunakan
array. Namun, program ini memiliki beberapa kekurangan seperti tidak melakukan validasi input pada fungsi
tambah() dan tidak memeriksa kondisi di mana antrian sudah kosong pada fungsi hapus().
```

### Percobaan 2

```
Program tersebut merupakan implementasi dari ADT Queue dengan menggunakan linked list.

Pada program ini, terdapat tiga fungsi utama yaitu tambah, hapus, dan display. Fungsi tambah digunakan untuk
menambahkan elemen baru ke dalam antrian, fungsi hapus digunakan untuk menghapus elemen pertama dari antrian,
dan fungsi display digunakan untuk menampilkan seluruh elemen yang ada pada antrian.

Dalam implementasinya, antrian direpresentasikan sebagai sebuah linked list. Setiap node pada linked list memiliki
dua bagian yaitu data dan pointer ke node selanjutnya. Front merupakan pointer yang menunjukkan pada elemen pertama
dalam antrian, sedangkan rear merupakan pointer yang menunjukkan pada elemen terakhir dalam antrian. Program ini memiliki
tampilan menu yang memudahkan pengguna dalam mengakses fungsi-fungsi yang disediakan oleh ADT Queue. Selain itu,
program ini juga memiliki fitur keluar yang dapat mengakhiri program.
```

### Percobaan 3

```
Program ini merupakan implementasi dari circular queue menggunakan bahasa pemrograman C.
Circular queue adalah struktur data antrian (queue) yang terbatas dengan ukuran tetap dan elemen
yang dihapus dari awal queue akan ditempatkan pada akhir queue, sehingga terbentuk sebuah lingkaran.
Program ini terdiri dari beberapa fungsi utama yaitu:
enqueue : untuk menambahkan elemen pada queue.
dequeue : untuk menghapus elemen pada queue.
display : untuk menampilkan elemen pada queue.

Selain itu, terdapat pula fungsi main sebagai entry point dari program ini. Pada fungsi main, program akan
menampilkan menu yang memungkinkan pengguna untuk memilih operasi yang ingin dilakukan pada circular queue,
seperti menambahkan elemen, menghapus elemen, dan menampilkan elemen.
```

### Percobaan 4

```
Program ini merupakan implementasi dari struktur data deque (double ended queue) dengan menggunakan array
pada bahasa pemrograman C. Program ini memiliki beberapa fungsi utama yaitu:
insert_front(int x): untuk menambahkan nilai pada bagian depan deque
insert_rear(int x) : untuk menambahkan nilai pada bagian belakang deque
display()          : untuk menampilkan semua nilai yang ada pada deque
getfront()         : untuk mendapatkan nilai pada bagian depan deque
getrear()          : untuk mendapatkan nilai pada bagian belakang deque
delete_front()     : untuk menghapus elemen dari bagian depan deque
delete_rear()      : untuk menghapus elemen dari bagian belakang deque

Setelah fungsi-fungsi tersebut didefinisikan, kemudian di dalam fungsi main terdapat penggunaan fungsi-fungsi
tersebut untuk mengoperasikan deque. Terdapat pemanggilan fungsi insert_front(), insert_rear(), delete_front(),
delete_rear(), dan display() untuk mengisi, menghapus, dan menampilkan elemen-elemen pada deque.
```

### Percobaan 5

```
Program ini merupakan implementasi dari priority queue menggunakan heap. Program ini dapat memasukkan
elemen ke dalam heap menggunakan fungsi insert(), menghapus elemen tertentu menggunakan fungsi deleteRoot(),
dan menampilkan isi dari heap menggunakan fungsi printArray(). Program ini juga memiliki fungsi heapify()
yang digunakan untuk mengatur ulang elemen pada tree.

Pada fungsi heapify(), program menggunakan algoritma Max-Heap, yaitu setiap node pada tree memiliki nilai yang
lebih besar atau sama dengan anak-anaknya. Jika suatu node memiliki nilai yang lebih kecil dari anak-anaknya,
maka dilakukan swap antara node dan anak terbesarnya, dan proses ini dilakukan secara rekursif sampai tree teratur.

Fungsi insert() pada program ini menambahkan elemen pada akhir array, dan kemudian mengatur ulang elemen heap
menggunakan fungsi heapify().

Fungsi deleteRoot() pada program ini mencari elemen yang akan dihapus, melakukan swap dengan elemen terakhir
pada array, dan kemudian mengurangi ukuran heap. Setelah itu, program mengatur ulang elemen heap menggunakan fungsi heapify().

Pada fungsi printArray(), program hanya menampilkan isi dari array yang merepresentasikan heap.

Program ini dapat dijalankan dengan menggunakan driver code pada fungsi main(), dimana program memasukkan beberapa
elemen pada heap menggunakan fungsi insert(), kemudian melakukan penghapusan elemen tertentu menggunakan
fungsi deleteRoot(), dan menampilkan isi heap menggunakan fungsi printArray().
```

#### Latihan 1

<details><summary><b>Program ini adalah implementasi dari struktur data Queue menggunakan array.</b></summary>
 
Pada program tersebut, terdapat 3 fungsi utama yaitu:

```
enQueue()   - digunakan untuk menambahkan elemen baru ke dalam antrian. Jika antrian telah penuh,
              maka akan ditampilkan pesan bahwa antrian telah penuh.
deQueue()   - digunakan untuk menghapus elemen pertama dari antrian. Jika antrian kosong, maka
              akan ditampilkan pesan bahwa antrian kosong.
tampilkan() - digunakan untuk menampilkan elemen-elemen pada antrian.

Dalam program tersebut, fungsi main() memanggil beberapa fungsi enQueue() untuk menambahkan beberapa
elemen ke dalam antrian, kemudian memanggil fungsi tampilkan() untuk menampilkan semua elemen pada antrian.
Selanjutnya, fungsi deQueue() dipanggil untuk menghapus elemen pertama dari antrian, dan kemudian memanggil
fungsi tampilkan() lagi untuk menampilkan elemen-elemen yang tersisa pada antrian.
```
</details>

#### Latihan 2

<details><summary><b>Program ini adalah implementasi dari struktur data Queue menggunakan linked list.</b></summary>
 
Pada program tersebut, terdapat 4 fungsi utama yaitu:

```
inisialisasi() - digunakan untuk menginisialisasi queue dengan mengatur count menjadi 0 dan front serta rear menjadi NULL.
isempty()      - digunakan untuk memeriksa apakah queue kosong atau tidak.
enqueue()      - digunakan untuk menambahkan elemen baru ke dalam antrian. Jika antrian telah penuh, maka akan ditampilkan
                 pesan bahwa antrian telah penuh.
dequeue()      - digunakan untuk menghapus elemen pertama dari antrian, dan mengembalikan nilai dari elemen tersebut.

Dalam program tersebut, fungsi main() memanggil fungsi inisialisasi() untuk menginisialisasi queue, kemudian memanggil
fungsi enqueue() untuk menambahkan beberapa elemen ke dalam antrian, dan fungsi display() untuk menampilkan elemen-elemen
pada antrian. Selanjutnya, fungsi dequeue() dipanggil untuk menghapus elemen pertama dari antrian, dan kemudian memanggil
fungsi display() lagi untuk menampilkan elemen-elemen yang tersisa pada antrian.
```
</details>

#### Tugas 1

```
Program tersebut adalah implementasi dari algoritma Breadth-First Search (BFS) pada sebuah graf
menggunakan bahasa pemrograman C. Program ini akan meminta input jumlah simpul dan matriks kedekatan
dari graf, serta simpul awal yang akan dilakukan pencarian dengan algoritma BFS.

Pada awal program, didefinisikan konstanta MAX_SIZE yang menunjukkan jumlah maksimal elemen dalam queue.
Kemudian didefinisikan variabel-variabel global yaitu queue, front, dan rear untuk merepresentasikan antrian dalam BFS.
Selanjutnya, terdapat tiga fungsi yaitu enqueue, dequeue, dan isQueueEmpty yang berguna untuk mengelola antrian pada algoritma BFS.
Fungsi enqueue akan memasukkan elemen ke dalam queue jika queue belum penuh. Jika queue penuh, maka akan menampilkan pesan "Queue Penuh".
Fungsi dequeue akan mengeluarkan elemen dari queue jika queue tidak kosong. Jika queue kosong, maka akan menampilkan pesan "Queue Kosong"
dan mengembalikan nilai -1.
Fungsi isQueueEmpty akan mengembalikan nilai 1 jika queue kosong, dan mengembalikan nilai 0 jika tidak.
Selanjutnya terdapat fungsi bfs yang akan menerima matriks kedekatan, array visited, simpul awal, dan jumlah simpul.
Fungsi ini akan mengimplementasikan algoritma BFS untuk melakukan traversal pada graf.
Pada awal fungsi bfs, simpul awal akan ditandai sebagai telah dikunjungi dan dimasukkan ke dalam queue menggunakan fungsi enqueue.
Selanjutnya, selama queue tidak kosong, fungsi bfs akan mengeluarkan elemen pertama dari queue menggunakan fungsi
dequeue dan menandai elemen tersebut sebagai telah dikunjungi. Kemudian, fungsi bfs akan memeriksa semua simpul yang
terhubung dengan simpul tersebut dan menambahkannya ke dalam queue jika simpul tersebut belum dikunjungi.
Terakhir, pada fungsi main, program akan meminta input jumlah simpul dan matriks kedekatan dari graf. Kemudian, semua elemen
pada array visited akan diinisialisasi dengan nilai 0, dan simpul awal akan diminta dari pengguna. Setelah itu, fungsi bfs akan
dipanggil dengan matriks kedekatan, array visited, simpul awal, dan jumlah simpul sebagai parameter, dan hasilnya akan ditampilkan pada layar.
```

## [Jobsheet 8](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%208)

### BUBBLE DENGAN ARRAY ASCENDING

```
Bubble Sort adalah algoritma pengurutan sederhana yang bekerja dengan cara membandingkan setiap pasangan
elemen yang bersebelahan dan menukar posisi jika diperlukan. Algoritma ini diberi nama Bubble karena elemen
yang lebih kecil seperti "menggelembung" ke atas menuju ke permukaan array, sementara elemen yang lebih besar
"terbenam" ke bawah menuju ke dasar array.

Fungsi bubbleSort adalah implementasi dari algoritma Bubble Sort. Parameter pertama dari fungsi adalah array
integer yang akan diurutkan dan parameter kedua adalah ukuran array tersebut. Fungsi ini melakukan pengurutan
dari awal array hingga akhir dengan menggunakan dua loop, yaitu loop outer dan loop inner. Loop outer menentukan
berapa kali pengurutan harus dilakukan, sedangkan loop inner melakukan pengurutan pada satu kali iterasi loop
outer. Dalam loop inner, setiap pasangan elemen yang bersebelahan dibandingkan, dan jika elemen pertama lebih
besar dari elemen kedua, maka kedua elemen akan ditukar. Setelah loop inner selesai, elemen terbesar akan berada
di akhir array, kemudian loop outer berlanjut hingga pengurutan selesai.

Fungsi printArray digunakan untuk mencetak array yang diurutkan. Fungsi ini memiliki parameter yang sama seperti
fungsi bubbleSort. Fungsi ini menggunakan loop untuk mencetak setiap elemen dari array dalam satu baris dan diakhiri
dengan karakter newline (\n).

Dalam fungsi main, array integer data yang akan diurutkan sudah didefinisikan secara langsung. Ukuran array dihitung
dengan menghitung jumlah elemen dalam array dan dibagi dengan ukuran satu elemen. Kemudian, fungsi bubbleSort dipanggil
dengan data dan size sebagai parameter. Setelah array diurutkan, fungsi printArray dipanggil untuk mencetak array yang
diurutkan dalam urutan menaik. Terakhir, fungsi main mengembalikan nilai 0 untuk menunjukkan program telah berakhir.
```

### BUBBLE SORT BENTUK KEDUA

```
Selection Sort adalah algoritma pengurutan sederhana yang bekerja dengan cara memilih elemen terkecil (atau terbesar)
dari array dan menempatkannya pada posisi pertama (atau terakhir). Kemudian, elemen terkecil kedua dipilih dari sisa
array dan ditempatkan pada posisi kedua, dan begitu seterusnya hingga array terurut. Dalam program ini, terdapat sebuah
array a dengan 10 elemen yang sudah diinisialisasi secara langsung. Algoritma Selection Sort diimplementasikan menggunakan
dua loop for, yaitu loop outer dan loop inner. Loop outer menentukan posisi elemen terkecil yang akan dipilih, sedangkan
loop inner mencari elemen terkecil dari sisa array dan menukarnya dengan elemen pada posisi yang dipilih loop outer. Pada
setiap iterasi loop outer, elemen terkecil akan terletak pada posisi yang diindeks oleh loop outer tersebut. Setelah array
diurutkan, program mencetak setiap elemen dalam array secara terurut dari yang terbesar ke yang terkecil menggunakan loop
for dan fungsi printf. Terakhir, program mencetak nama pembuat program dan NIM-nya. Kesimpulannya, program ini mengimplementasikan
algoritma Selection Sort untuk mengurutkan elemen dalam sebuah array integer, dan mencetak elemen dalam array secara terurut dari
yang terbesar ke yang terkecil.
```

### BUBBLE SORT WITH ITERATION

```
Algoritma bubble sort bekerja dengan membandingkan setiap elemen pada array dan menukarkan elemen yang lebih besar
dengan elemen yang lebih kecil.Program ini memiliki fungsi display() yang digunakan untuk menampilkan isi dari array,
dan fungsi bubbleSort() yang mengimplementasikan algoritma bubble sort. Pada fungsi bubbleSort(), terdapat dua buah loop,
yaitu loop pertama digunakan untuk mengulang sebanyak (n-1) kali, sedangkan loop kedua digunakan untuk membandingkan
setiap elemen pada array. Pada loop kedua ini, jika elemen berikutnya lebih kecil dari elemen sekarang, maka kedua elemen
tersebut ditukar posisinya. Program ini juga menampilkan pesan yang memberitahukan elemen mana yang sedang dibandingkan,
dan apakah terjadi pertukaran elemen atau tidak pada setiap iterasi. Program ini juga menampilkan hasil setiap iterasi
pada array, yang digunakan untuk memantau bagaimana algoritma bubble sort bekerja. Kesimpulan dari program ini adalah bahwa
algoritma bubble sort dapat mengurutkan array dengan cukup efektif, namun terdapat kelemahan yaitu tidak efisien jika digunakan
untuk array dengan jumlah elemen yang besar. Selain itu, program ini juga menunjukkan pentingnya menampilkan hasil setiap
iterasi untuk memantau dan memahami cara kerja dari algoritma bubble sort.
```

### INSERTION SORT-ASCENDING

```
Tujuan program ini adalah untuk mengurutkan array data_awal secara acak dengan ukuran maksimum 20,
dan kemudian mencetak array yang sudah diurutkan menggunakan algoritma Insertion Sort beserta dengan
waktu yang diperlukan untuk mengurutkan array tersebut. Algoritma Insertion Sort bekerja dengan
membagi array menjadi dua bagian, yaitu bagian yang sudah diurutkan dan bagian yang belum diurutkan.
Setiap elemen dalam bagian belum diurutkan dimasukkan ke dalam bagian yang sudah diurutkan dengan cara
mencari posisi yang tepat dan menempatkannya pada posisi tersebut. Algoritma ini cukup efektif pada
array dengan ukuran yang kecil. Pada program ini, array data_awal diisi dengan bilangan acak antara
1 hingga 100 menggunakan fungsi rand() dari library stdlib.h. Setelah array diisi, program mencetak
array sebelum diurutkan, kemudian menyalin array tersebut ke array baru data_urut. Kemudian, fungsi
InsertionSort dipanggil untuk mengurutkan array data_urut. Setelah array diurutkan, program mencetak array
yang sudah diurutkan dan waktu yang diperlukan untuk mengurutkan array tersebut menggunakan fungsi time().
Dari program ini, dapat disimpulkan bahwa algoritma Insertion Sort cocok digunakan pada data dengan ukuran
yang kecil, seperti pada kasus ini. Namun, jika digunakan pada data dengan ukuran yang besar, algoritma
Insertion Sort akan menjadi kurang efisien karena memerlukan banyak perbandingan dan perpindahan data.
Selain itu, program ini juga memberikan contoh cara menghasilkan bilangan acak menggunakan fungsi rand()
dari library stdlib.h dan cara menghitung waktu eksekusi program menggunakan fungsi time().
```

### INSERTION SORT WITH ITERATION

```
Algoritma Insertion Sort bekerja dengan mengambil satu elemen pada setiap iterasi dan memasukkannya ke
dalam posisi yang tepat pada bagian depan array yang sudah terurut.Dalam program tersebut, array yang
diurutkan memiliki 7 elemen dengan nilai awal yang telah didefinisikan. Kemudian, fungsi display() digunakan
untuk menampilkan elemen-elemen tersebut sebelum diurutkan, dan fungsi printline() digunakan untuk memberikan
garis pemisah antara array sebelum dan setelah diurutkan. Fungsi insertionSort() merupakan implementasi dari
algoritma Insertion Sort dengan melakukan looping melalui seluruh elemen pada array, lalu memilih satu elemen
untuk dimasukkan ke dalam posisi yang tepat pada bagian depan array yang sudah terurut. Setelah selesai diurutkan,
fungsi display() dipanggil kembali untuk menampilkan array yang sudah diurutkan. Program kemudian selesai dengan
mengembalikan nilai 0.
```

#### TUGAS BUBBLE SORT

```
Algoritma Bubble Sort bekerja dengan membandingkan setiap pasangan elemen dalam array dan menukar posisi
jika diperlukan. Pada setiap iterasi, elemen terbesar akan dipindahkan ke posisi akhir array.

Dalam program di atas, fungsi bubbleSort mengimplementasikan algoritma Bubble Sort. Fungsi ini menerima
dua parameter, yaitu array integer dan ukuran array. Fungsi ini melakukan pengurutan pada array dengan dua
loop, yaitu loop luar dan loop dalam. Loop luar menentukan berapa kali pengurutan harus dilakukan, sedangkan
loop dalam melakukan pengurutan pada satu kali iterasi loop luar. Dalam loop dalam, setiap pasangan elemen
dibandingkan, dan jika elemen pertama lebih besar dari elemen kedua, maka kedua elemen akan ditukar. Setelah
loop dalam selesai, elemen terbesar akan berada di akhir array, dan loop luar berlanjut hingga pengurutan selesai.

Di dalam fungsi main, array integer arr yang akan diurutkan sudah didefinisikan secara langsung. Ukuran array
dihitung dengan menghitung jumlah elemen dalam array dan dibagi dengan ukuran satu elemen. Kemudian, fungsi
bubbleSort dipanggil dengan arr dan n sebagai parameter untuk mengurutkan array tersebut. Setelah itu, program
mencetak array yang telah diurutkan menggunakan loop for.
```

#### TUGAS INSERTION SORT 

```
Algoritma Insertion Sort adalah algoritma pengurutan sederhana yang bekerja dengan cara memasukkan setiap elemen
dalam urutan yang tepat, satu per satu. Algoritma ini mengambil elemen yang belum diurutkan dari kiri ke kanan dan
memasukkannya ke dalam bagian yang telah diurutkan sebelumnya.

Fungsi insertionSort adalah implementasi dari algoritma Insertion Sort. Parameter pertama dari fungsi adalah array
integer yang akan diurutkan dan parameter kedua adalah ukuran array tersebut. Fungsi ini menggunakan tiga variabel
integer, yaitu i, key, dan j. Loop for dilakukan untuk memproses setiap elemen dalam array, dimulai dari elemen kedua
hingga elemen terakhir. Variabel key digunakan untuk menyimpan nilai elemen yang sedang diproses dan variabel j
digunakan untuk menunjukkan posisi elemen sebelumnya dalam array. Dalam loop while, setiap elemen dibandingkan dengan
elemen sebelumnya. Jika elemen saat ini lebih kecil dari elemen sebelumnya, maka elemen sebelumnya akan dipindahkan ke
posisi selanjutnya. Setelah loop while selesai, elemen yang sedang diproses akan disisipkan ke dalam urutan yang tepat
dengan menggunakan variabel j sebagai indikator posisi. Algoritma ini berlanjut hingga semua elemen dalam array terurut.

Dalam fungsi main, array integer arr yang akan diurutkan sudah didefinisikan secara langsung. Ukuran array dihitung
dengan menghitung jumlah elemen dalam array dan dibagi dengan ukuran satu elemen. Kemudian, fungsi insertionSort
dipanggil dengan arr dan n sebagai parameter. Setelah array diurutkan, loop for digunakan untuk mencetak setiap
elemen dari array dalam satu baris dan diakhiri dengan karakter newline (\n).

Kesimpulan dari program ini adalah bahwa algoritma Insertion Sort adalah algoritma pengurutan sederhana yang cukup
efektif untuk digunakan pada array dengan jumlah elemen yang relatif kecil. Program ini berhasil mengurutkan array
integer dengan menggunakan algoritma Insertion Sort.<br><br>
```

## [Jobsheet 9](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%209)

#### Latihan 1

```
Pada kode Latihan, program menggunakan algoritma Merge Sort untuk mengurutkan data dalam sebuah array secara ascending.
Berikut adalah penjelasan dari setiap fungsi yang ada dalam program tersebut:
- Fungsi input() digunakan untuk meminta input dari pengguna berupa jumlah elemen yang akan di-generate secara acak
  menggunakan fungsi rand(). Input tersebut akan disimpan dalam variabel n, dan array data akan di-generate sebanyak
  n elemen secara acak. Fungsi ini tidak mengembalikan nilai apapun.
- Fungsi tukar(int *a, int *b) tidak digunakan dalam program ini.
- Fungsi tampil() digunakan untuk menampilkan isi array data setelah diurutkan menggunakan Merge Sort. Fungsi ini tidak
  mengembalikan nilai apapun.
- Fungsi partisi(int data[], int low, int high) merupakan fungsi rekursif yang membagi array data menjadi subarray yang
  lebih kecil. Fungsi ini memanggil dirinya sendiri dengan parameter yang berbeda, yaitu low dan high yang menandakan
  indeks awal dan indeks akhir dari subarray yang akan di-sorting.
- Fungsi mergesort(int data[], int low, int mid, int high) merupakan fungsi yang menggabungkan dua subarray yang sudah
  terurut menjadi satu subarray yang lebih besar. 6. Fungsi ini memiliki empat parameter, yaitu data yang merupakan array
  yang akan di-sorting, low dan high yang menandakan indeks awal dan indeks akhir dari subarray yang akan di-sorting, dan
  mid yang menandakan indeks tengah dari subarray yang akan di-sorting. Fungsi ini juga menggunakan array temp untuk
  menyimpan sementara subarray yang sudah terurut.

Didalam fungsi main(), program memanggil fungsi input() untuk meminta input dari pengguna, kemudian memanggil fungsi
partisi() dengan parameter data, awal, dan akhir. Setelah itu, program memanggil fungsi tampil() untuk menampilkan isi
array data setelah diurutkan menggunakan Merge Sort.
```

#### Latihan 2

```
Ini adalah program C yang mengimplementasikan algoritma Merge Sort untuk mengurutkan array bilangan bulat.

Program ini mendefinisikan dua larik bilangan bulat global: "a" dan "b", dengan "a" sebagai larik yang akan
diurutkan, dan "b" sebagai larik sementara yang digunakan dalam proses penyortiran. Program juga mendefinisikan
konstanta "MAX" yang merupakan indeks maksimum dari larik "a".
Program kemudian mendefinisikan dua fungsi: "merging" dan "sort".
Fungsi "penggabungan" membutuhkan tiga argumen: "rendah", "sedang", dan "tinggi", yang mewakili indeks bawah,
indeks tengah, dan indeks lebih tinggi dari bagian larik "a". Fungsi kemudian menggabungkan dua sub-array
dari "low" ke "mid" dan dari "mid+1" ke "high" ke dalam array sementara "b". Akhirnya, fungsi menyalin
kembali sub-array yang digabungkan ke "a".
Fungsi "urutkan" membutuhkan dua argumen: "rendah" dan "tinggi", yang mewakili indeks lebih rendah dan lebih
tinggi dari bagian larik "a" yang akan diurutkan. Fungsi pertama memeriksa apakah "rendah" kurang dari "tinggi",
jika demikian, ia menghitung indeks tengah bagian dan memanggil dirinya secara rekursif dengan bagian bawah dan atas.
Setelah kedua panggilan rekursif selesai, fungsi memanggil fungsi "penggabungan" untuk menggabungkan dua sub-array yang diurutkan.
Fungsi "utama" hanya mencetak larik yang tidak disortir, memanggil fungsi "urutkan", dan kemudian mencetak larik yang diurutkan.
```

#### Latihan 3

```
Pada program ini, dilakukan pengurutan array menggunakan metode merge sort. Pada fungsi merge_sort, terdapat empat
parameter yaitu i dan j yang menandakan indeks awal dan akhir dari array yang akan diurutkan, a yang merupakan array
yang akan diurutkan, dan aux yang merupakan array sementara yang digunakan dalam proses pengurutan.

Pertama-tama, fungsi melakukan pengecekan apakah subarray yang akan diurutkan hanya terdiri dari satu elemen atau
bahkan kosong. Jika ya, maka fungsi akan langsung return. Jika tidak, maka dilakukan pemisahan subarray menjadi dua
bagian menggunakan indeks mid. Lalu, dilakukan pemanggilan fungsi merge_sort secara rekursif untuk kedua subarray
tersebut. Setelah itu, dilakukan penggabungan (merge) dua subarray yang telah diurutkan menggunakan pointer
pointer_left dan pointer_right yang menunjukkan indeks awal dari kedua subarray. Loop for kemudian dilakukan untuk
membandingkan elemen-elemen di subarray kiri dan kanan dan memindahkan elemen dengan nilai lebih kecil ke dalam
array aux. Setelah itu, elemen-elemen di aux di-copy ke array a dan pengurutan selesai.

Di dalam fungsi main, pertama-tama dibaca jumlah elemen n yang akan dimasukkan ke dalam array a. Kemudian, dilakukan
pengisian array a dengan input dari user. Setelah itu, dilakukan pemanggilan fungsi merge_sort untuk mengurutkan array a.
Terakhir, hasil pengurutan ditampilkan ke layar menggunakan loop for.
```

#### Latihan 4

```
Program yang diberikan adalah implementasi dari algoritma Selection Sort pada bahasa pemrograman C.

Pada awal program, terdapat beberapa fungsi seperti printline untuk mencetak garis pemisah, display
untuk menampilkan isi array, dan selectionSort untuk melakukan pengurutan menggunakan algoritma Selection Sort.

Array yang akan diurutkan telah didefinisikan sebelumnya di dalam variabel intArray dengan ukuran MAX.

Pada fungsi selectionSort, pengurutan dilakukan dengan menggunakan dua perulangan. Pada perulangan pertama,
dilakukan pengecekan untuk setiap elemen dari indeks 0 hingga n-1, dengan n adalah panjang array.
Pada perulangan kedua, dilakukan pengecekan elemen yang lebih besar dari elemen ke-i.
Jika elemen tersebut lebih kecil dari elemen minimum sebelumnya, maka elemen tersebut dianggap sebagai elemen minimum.
Setelah semua elemen diperiksa, elemen minimum akan ditukar dengan elemen ke-i jika elemen minimum tidak sama dengan elemen ke-i.
Setelah itu, program akan mencetak iterasi pengurutan dengan menggunakan fungsi display setiap kali pengurutan dilakukan.
Terakhir, program akan mencetak array yang telah diurutkan.
```

#### Latihan 5

```
Program yang diberikan adalah implementasi dari algoritma Selection Sort pada bahasa pemrograman C.

Pada program di atas, dibuat sebuah implementasi algoritma selection sort yang mengurutkan array integer
secara ascending (menaik) dengan menggunakan fungsi selectionSort() dan swap().

Fungsi selectionSort() digunakan untuk melakukan iterasi dan memilih elemen terkecil dalam array dari elemen ke-i s
ampai akhir array, kemudian menukar elemen terkecil tersebut dengan elemen ke-i. Proses iterasi ini dilakukan
sebanyak (size - 1) kali, karena pada iterasi ke-i, elemen ke-i sudah pasti merupakan elemen terkecil pada subarray
yang belum terurut. Sedangkan fungsi swap() digunakan untuk menukar posisi antara dua elemen dalam array.
Fungsi printArray() digunakan untuk mencetak seluruh elemen dalam array yang sudah terurut.
Pada fungsi main(), terdapat sebuah array integer data yang akan diurutkan menggunakan algoritma selection sort.
Kemudian, dilakukan pemanggilan fungsi selectionSort() dengan parameter array data dan ukuran array size. Setelah itu,
dilakukan pemanggilan fungsi printArray() untuk mencetak array yang sudah terurut.
```

#### Latihan 6

```
Ini adalah program C yang mengimplementasikan algoritma pengurutan seleksi untuk mengurutkan array bilangan bulat
dalam urutan menaik.

Program dimulai dengan meminta pengguna untuk memasukkan jumlah elemen yang ingin mereka urutkan dan kemudian
membaca nilai integer. Ini kemudian memanggil fungsi selSort() , yang mengambil array dan ukurannya sebagai argumen
dan mengurutkan array menggunakan algoritma pengurutan pilihan.

Fungsi selSort() menggunakan dua loop bersarang untuk mengulang array dan menemukan elemen terkecil. Itu kemudian
menukar elemenitu dengan elemen pertama dari bagian array yang tidak disortir. Proses ini diulang sampai seluruh
array diurutkan.

Terakhir, array yang diurutkan dicetak ke konsol menggunakan loop lain di fungsi selSort().
```

#### Latihan 7

```
Ini adalah program yang ditulis dalam bahasa C untuk mengimplementasikan algoritma Seleksi Seleksi untuk menyortir
array bilangan bulat.

Program mengambil input pengguna untuk jumlah elemen dalam array dan elemen itu sendiri. Kemudian ia memanggil fungsi
selectionSort untuk mengurutkan array dalam urutan menaik. Akhirnya, ini mencetak array yang diurutkan.

Fungsi selectionSort bekerja dengan mengulangi array dan menemukan elemen terkecil di bagian array yang tidak disortir,
menukarnya dengan elemen pertama yang tidak disortir, dan melanjutkan hingga seluruh array diurutkan.
```

#### Tugas 1 ( Merge Sort )

```
Aplikasi ini menggunakan algoritma Merge Sort untuk mengurutkan sebuah array bilangan bulat.

Pada fungsi mergeSort, array akan dipecah menjadi dua bagian hingga menjadi array dengan satu elemen.
Setelah itu, fungsi merge akan dipanggil untuk menggabungkan kembali kedua bagian array yang sudah dipecah
tadi dengan cara membandingkan nilai elemen pada kedua bagian tersebut. Proses penggabungan ini dilakukan
secara rekursif hingga seluruh array menjadi terurut.

Fungsi merge menerima empat parameter yaitu array, indeks kiri, indeks tengah, dan indeks kanan. Fungsi ini
akan membuat dua array sementara yaitu L dan R yang masing-masing berisi bagian kiri dan bagian kanan dari
array utama. Kemudian, fungsi akan membandingkan nilai elemen pada kedua array sementara tersebut dan
memasukkannya ke dalam array utama sesuai dengan urutan dari elemen-elemen tersebut. Proses ini dilakukan
hingga seluruh elemen pada kedua array sementara habis dimasukkan ke dalam array utama.

Setelah seluruh array terurut, program akan mencetak nama, NIM, dan array yang sudah terurut.
```

#### Tugas 1 ( Selection Sort )

```
Aplikasi ini menggunakan algoritma Selection Sort untuk mengurutkan sebuah array bilangan bulat.

Pada fungsi selectionSort, program akan memilih elemen dengan nilai terkecil pada bagian array yang belum
terurut dan menukar elemen tersebut dengan elemen pada indeks pertama. Proses ini dilakukan hingga seluruh elemen terurut.

Algoritma ini menggunakan dua variabel untuk melakukan iterasi yaitu i dan j. Variabel i digunakan untuk menunjukkan
indeks elemen yang akan dipilih sebagai elemen terkecil, sedangkan variabel j digunakan untuk membandingkan nilai elemen
pada indeks ke j dengan nilai elemen terkecil yang sudah ditentukan.

Variabel min_idx digunakan untuk menyimpan indeks dari elemen terkecil yang sudah ditemukan pada setiap iterasi.
Setelah iterasi kedua, elemen pada indeks pertama dan elemen terkecil sudah tertukar posisinya. Proses ini dilanjutkan
hingga seluruh elemen terurut.

Setelah seluruh array terurut, program akan mencetak nama, NIM, dan array yang sudah terurut.
```

## [Jobsheet 10](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%2010)

### Percobaan 1

```
Program di atas adalah implementasi algoritma Shell Sort untuk mengurutkan sebuah array dengan
menggunakan bahasa pemrograman C.

Pada algoritma Shell Sort, array dipecah menjadi beberapa bagian dan dilakukan pengurutan secara
terpisah untuk setiap bagiannya menggunakan algoritma insertion sort. Kemudian, interval yang digunakan
untuk pengurutan setiap bagian tersebut secara bertahap dikurangi hingga menjadi 1, sehingga seluruh
elemen pada array akan terurut.

Pada fungsi shellSort, terdapat dua perulangan. 1.Perulangan pertama untuk mengatur interval yang
digunakan untuk pengurutan setiap bagian array, dimulai dari gap = n/2, dan dikurangi secara bertahap
hingga gap 2.Perulangan kedua untuk melakukan pengurutan pada setiap bagian array dengan menggunakan
interval gap yang telah ditentukan.

Fungsi printArray digunakan untuk menampilkan isi array yang telah diurutkan.

Pada main, terdapat array data yang akan diurutkan menggunakan fungsi shellSort. Kemudian,
setelah array diurutkan, dilakukan pemanggilan fungsi printArray untuk menampilkan isi array
yang telah diurutkan ke layar.
```

### Percobaan 2

```
Program di atas merupakan contoh implementasi Shell Sort menggunakan bahasa C. Shell Sort adalah
metode pengurutan dengan membagi data menjadi beberapa sub-list yang lebih kecil, kemudian mengurutkan
setiap sub-list tersebut menggunakan metode pengurutan insertion sort. Metode ini kemudian secara
berulang mengurangi jarak antar elemen yang dibandingkan dalam sub-list hingga mencapai jarak satu elemen.

Pada program di atas, user diminta memasukkan 6 elemen yang akan diurutkan menggunakan Shell Sort.
Setelah elemen dimasukkan, program akan mencetak elemen sebelum diurutkan. Kemudian, program akan
membagi data menjadi beberapa sub-list yang lebih kecil dengan menggunakan nilai gap sebesar n/2.
Selanjutnya, setiap sub-list tersebut diurutkan menggunakan metode pengurutan insertion sort dengan
membandingkan elemen dengan jarak m, kemudian mengurutkan kembali sub-list tersebut dengan gap m/2.
Proses pengurutan tersebut akan diulang hingga mencapai gap dengan jarak satu elemen. Setelah
selesai diurutkan, program akan mencetak elemen yang sudah diurutkan.
```

### Percobaan 3

```
Program tersebut merupakan implementasi algoritma Shell Sort untuk mengurutkan array of integers.

Pada fungsi ShellSort, pertama-tama dilakukan inisialisasi variabel increment dengan setengah
ukuran array. Kemudian, dilakukan looping dengan iterasi yang terus berkurang sebanyak setengah
ukuran array dengan setiap iterasi. Pada setiap iterasi ini, dilakukan insertion sort pada sub-array
yang terdiri dari elemen yang terpisah dengan jarak increment.

Pada fungsi main, terdapat input dari user untuk jumlah dan nilai elemen pada array. Setelah array
diurutkan dengan menggunakan fungsi ShellSort, dilakukan output array yang telah diurutkan ke layar.

Sebagai contoh, apabila user memasukkan bilangan 5 2 3 1 4 maka output yang dihasilkan setelah diurutkan
dengan algoritma Shell Sort adalah 1 2 3 4 5.
```

### Percobaan 4

```
Program ini adalah implementasi algoritma Quick Sort untuk mengurutkan sebuah array integer dalam bahasa C.

Quick Sort adalah algoritma pengurutan dengan pendekatan divide and conquer. Pada setiap iterasi, algoritma
memilih sebuah elemen sebagai pivot dan mempartisi array ke dalam dua bagian, satu dengan elemen yang lebih
kecil dari pivot dan satu dengan elemen yang lebih besar. Kemudian, algoritma diaplikasikan rekursif pada kedua
bagian tersebut untuk mengurutkan seluruh array.

Program ini terdiri dari beberapa fungsi, yaitu:

swap() : fungsi utilitas untuk menukar dua elemen dalam array.
partition() : fungsi untuk membagi array menjadi dua bagian menggunakan pivot dan mengembalikan indeks pivot.
quickSort() : fungsi utama untuk mengurutkan array menggunakan algoritma Quick Sort dengan menerapkan rekursi.
Pada fungsi main(), sebuah array integer awal diinisialisasi. Kemudian, fungsi quickSort() dipanggil dengan parameter
indeks awal (0) dan indeks akhir (n-1) array untuk mengurutkan seluruh array. Setelah itu, fungsi printArray()
dipanggil untuk mencetak hasil pengurutan array yang sudah diurutkan dengan format yang telah ditentukan pada program.
```

### Percobaan 5

```
Program ini merupakan implementasi algoritma Quick Sort untuk mengurutkan sebuah array integer.

Algoritma Quick Sort bekerja dengan memilih sebuah elemen dari array sebagai pivot, lalu memindahkan
semua elemen yang lebih kecil daripada pivot ke sebelah kiri dan elemen yang lebih besar ke sebelah
kanan pivot. Kemudian, rekursif melakukan proses yang sama pada kedua sisi pivot hingga seluruh elemen terurut.

Pada program ini, terdapat tiga buah fungsi yaitu swap(), partition(), dan quickSort().

Fungsi swap() digunakan untuk menukar dua buah elemen dalam array.
Fungsi partition() digunakan untuk membagi array menjadi dua bagian, yaitu bagian yang lebih kecil
dari pivot dan bagian yang lebih besar dari pivot.
Fungsi quickSort() merupakan implementasi algoritma Quick Sort itu sendiri.
Pada fungsi main(), terdapat array data yang berisi beberapa bilangan integer yang akan diurutkan menggunakan
algoritma Quick Sort. Pertama, panjang array dihitung dengan menggunakan operator sizeof. Kemudian, fungsi
quickSort() dipanggil dengan parameter awal (0) dan akhir (n-1) dari array. Setelah array terurut, fungsi printArray()
dipanggil untuk menampilkan isi array yang telah terurut.
```

### Percobaan 6

```
Program diatas adalah implementasi algoritma pengurutan Quick Sort menggunakan pendekatan non-rekursif.

Algoritma Quick Sort bekerja dengan memilih sebuah elemen dari array sebagai pivot, lalu mempartisi array
tersebut menjadi dua bagian, yaitu bagian yang lebih kecil dari pivot dan bagian yang lebih besar dari pivot.
Setelah itu, proses pengurutan dilakukan pada kedua bagian tersebut secara rekursif hingga seluruh elemen terurut.

Pada program diatas, pengurutan Quick Sort dilakukan secara non-rekursif dengan menggunakan pendekatan stack. Data
awal yang belum terurut diberikan secara acak dengan fungsi rand().

Kemudian, dilakukan pengurutan dengan memanggil fungsi QuickSortNonRekursif() yang memanfaatkan stack untuk menyimpan
posisi awal dan akhir bagian yang akan diurutkan. Setelah proses pengurutan selesai, data yang telah terurut ditampilkan
menggunakan fungsi printf().
```

#### Latihan ( Shell Sort )

```
Shell sort adalah variasi dari insertion sort yang menggunakan gap untuk memisahkan elemen-elemen dalam array.
Gap ini kemudian dikurangi secara berulang hingga mencapai nilai 1, sehingga dilakukan beberapa kali insertion
sort pada setiap gap tersebut.
Pada awalnya, gap diinisialisasi dengan nilai n/2, yang merupakan jarak antara elemen terakhir dan elemen pertama
dalam array.
Selama gap lebih besar dari 0, lakukan insertion sort pada setiap gap.
Pada setiap iterasi insertion sort, pilih elemen i sebagai elemen yang akan diinsertkan ke dalam posisi yang tepat
di antara elemen-elemen yang sudah diurutkan.
Bandingkan elemen i dengan elemen yang memiliki jarak gap dengan elemen i yang sudah diurutkan.
Jika elemen dengan jarak gap lebih besar dari elemen i, maka geser elemen tersebut ke posisi setelah elemen i dan
ulangi proses perbandingan dengan elemen yang memiliki jarak gap yang lebih kecil. Lakukan ini hingga ditemukan posisi
yang tepat untuk elemen i.
Setelah selesai insertion sort untuk gap saat ini, kurangi gap dengan membaginya dengan 2 dan ulangi proses insertion
sort untuk gap yang lebih kecil. Lakukan hal ini hingga gap mencapai nilai 1, di mana seluruh elemen array sudah terurut
Latihan ( Quick Sort )

Quick sort adalah salah satu algoritma sorting yang paling cepat dan efisien, dengan kompleksitas waktu rata-rata O(n log n).
Pada quick sort, terdapat elemen yang dijadikan pivot dan kemudian array dipecah menjadi dua bagian, satu bagian yang berisi
elemen yang lebih kecil dari pivot dan satu bagian yang berisi elemen yang lebih besar dari pivot. Kemudian lakukan quick sort
 pada kedua bagian tersebut secara rekursif.
Pada program di atas, pivot diambil dari elemen terakhir (high) pada setiap bagian array.
Kemudian lakukan partitioning untuk membagi array menjadi dua bagian, yaitu elemen yang lebih kecil dari pivot di bagian
kiri dan elemen yang lebih besar dari pivot di bagian kanan. Pada program di atas, digunakan teknik Hoare partitioning untuk
melakukan partitioning ini.
Setelah partitioning selesai, panggil quick sort pada kedua bagian array yang terpisah oleh pivot. Lakukan hal ini secara
rekursif hingga seluruh array sudah terurut.
```

## [Jobsheet 11](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%2011)

#### Latihan 1

```
Program diatas merupakan implementasi dari algoritma pencarian data dengan metode linear search.
Program akan meminta input jumlah elemen dalam array dan nilai-nilai dari elemen tersebut dari
pengguna. Kemudian program akan meminta input angka yang dicari. Program akan melakukan iterasi
melalui array dan memeriksa apakah nilai yang dicari sama dengan nilai pada indeks yang sedang
diperiksa. Jika iya, program akan mencetak pesan bahwa nilai yang dicari ditemukan di indeks
tersebut dan jumlah kemunculan nilai tersebut. Jika tidak, program akan mencetak pesan bahwa
nilai yang dicari tidak ditemukan dalam array.
```

#### Latihan 2

```
Program yang ditulis adalah implementasi dari algoritma pencarian linear atau linear search dalam bahasa pemrograman C.

Pencarian linear adalah teknik pencarian data dengan memeriksa setiap elemen dari sebuah array secara berurutan sampai
ditemukan elemen yang sesuai dengan kriteria pencarian atau sampai seluruh elemen telah diperiksa.

Program ini meminta pengguna untuk memasukkan jumlah elemen dalam array, kemudian meminta pengguna untuk memasukkan
elemen-elemen array tersebut. Setelah itu, program meminta pengguna untuk memasukkan angka yang akan dicari dalam array.

Setelah angka yang dicari dimasukkan, program melakukan pencarian linear dengan memeriksa setiap elemen dari array
secara berurutan sampai ditemukan elemen yang sesuai dengan angka yang dicari atau sampai seluruh elemen telah diperiksa.
Jika ditemukan, program akan mencetak pesan yang menampilkan lokasi elemen tersebut dalam array, dan menghitung berapa
kali elemen tersebut muncul dalam array. Jika tidak ditemukan, program akan mencetak pesan yang menunjukkan bahwa
elemen tidak ditemukan dalam array.

Perbedaan dari program ini dengan program linear search yang sebelumnya adalah terdapat kurung kurawal pada loop
input array sedangkan pada program sebelumnya tidak ada. Namun, perbedaan tersebut tidak mempengaruhi cara kerja
algoritma pencarian linear.
```

#### Latihan 3

```
Program ini juga merupakan implementasi dari algoritma pencarian linear atau linear search
dalam bahasa pemrograman C.

Pencarian linear dilakukan pada array yang telah dideklarasikan dengan isi elemen { 2, 3, 4, 10, 40 }.
Program ini akan mencari apakah nilai 10 ada pada array tersebut atau tidak.

Fungsi search() merupakan implementasi algoritma pencarian linear dengan menerima tiga parameter yaitu
array yang akan dicari, jumlah elemen dalam array, dan angka yang akan dicari. Fungsi ini melakukan
iterasi pada array dengan menggunakan loop for, dan memeriksa setiap elemen dari array secara berurutan
sampai ditemukan elemen yang sesuai dengan kriteria pencarian atau sampai seluruh elemen telah diperiksa.
Jika elemen yang dicari ditemukan, fungsi akan mengembalikan indeks elemen tersebut dalam array. Jika
tidak ditemukan, fungsi akan mengembalikan nilai -1.

Dalam fungsi main(), program menginisialisasi array dengan elemen { 2, 3, 4, 10, 40 }, kemudian memanggil
fungsi search() untuk mencari apakah nilai 10 ada pada array tersebut atau tidak. Jika nilai 10 ditemukan,
program akan mencetak pesan yang menampilkan indeks elemen tersebut dalam array. Jika nilai 10 tidak ditemukan,
 program akan mencetak pesan yang menunjukkan bahwa elemen tidak ditemukan dalam array.

Perbedaan program ini dengan program linear search sebelumnya adalah program ini mengimplementasikan
algoritma pencarian linear menggunakan fungsi, sementara program sebelumnya menggunakan loop for di dalam
fungsi main(). Implementasi fungsi ini memungkinkan untuk dilakukan pencarian pada array yang berbeda
dengan memanggil fungsi tersebut dengan parameter yang sesuai.
```

#### Latihan 4

```
Program diatas merupakan implementasi algoritma Linear Search untuk mencari suatu data dalam
kumpulan data menggunakan bahasa pemrograman C.

Pada awal program, terdapat inisialisasi kumpulan data pada array tabInt dan variabel-variabel seperti ketemu,
cariData, dan i. Kemudian user diminta untuk memasukkan data yang akan dicari menggunakan fungsi scanf() dan
data tersebut disimpan pada variabel cariData.

Program kemudian melakukan looping dengan while hingga salah satu kondisi terpenuhi, yaitu mencapai akhir array
atau data ditemukan. Pada setiap iterasi, program memeriksa apakah data yang dicari sama dengan data pada array
di indeks saat ini. Jika ditemukan, program mengubah nilai variabel ketemu menjadi 1 dan menghentikan looping.
Jika tidak ditemukan, program mengincrement variabel i untuk melanjutkan pencarian pada indeks berikutnya.

Setelah pencarian selesai, program memeriksa apakah data ditemukan atau tidak dengan memeriksa nilai variabel
ketemu. Jika ditemukan, program mencetak pesan bahwa data tersebut terdapat pada kumpulan data. Jika tidak
ditemukan, program mencetak pesan bahwa data tidak ditemukan pada kumpulan data.
```

#### Latihan 5

```
Program yang ditulis adalah implementasi dari Binary Search, yaitu algoritma untuk mencari suatu elemen dalam
sebuah array yang diurutkan secara terurut dari kecil ke besar (ascending) atau dari besar ke kecil (descending).
Algoritma Binary Search ini menggunakan pendekatan divide and conquer, yaitu membagi array menjadi dua setengah
pada setiap iterasinya.

Pada awal program, user diminta memasukkan jumlah elemen dalam array dan elemen-elemennya. Kemudian user diminta
memasukkan elemen yang ingin dicari. Variabel first, last, dan middle diinisialisasi untuk menentukan batas awal,
batas akhir, dan tengah dari array, dan nilai tengahnya dihitung dengan menjumlahkan nilai first dan last dan
kemudian dibagi 2.

Program akan melakukan looping selama first masih kurang dari atau sama dengan last. Dalam loop, program memeriksa
apakah elemen yang dicari berada di setengah kiri atau kanan dari elemen tengah array. Jika elemen yang dicari lebih
besar dari elemen tengah, maka program memperbarui nilai first menjadi middle + 1, dan mencari elemen tengah baru di
setengah kanan array. Jika elemen yang dicari lebih kecil dari elemen tengah, maka program memperbarui nilai last
menjadi middle - 1, dan mencari elemen tengah baru di setengah kiri array. Jika elemen yang dicari sama dengan elemen
tengah, maka program menampilkan pesan bahwa elemen ditemukan dan lokasinya. Jika first lebih besar dari last, maka
elemen yang dicari tidak ditemukan di dalam array dan program menampilkan pesan bahwa elemen tidak ditemukan
```

#### Latihan 6

```
Program yang ditunjukkan adalah implementasi algoritma binary search dalam bahasa pemrograman C.

Algoritma binary search digunakan untuk mencari elemen tertentu di dalam sebuah array yang telah diurutkan
secara terurut meningkat.

Fungsi binarySearch menerima parameter array arr, indeks awal l, indeks akhir r, dan elemen yang ingin dicari x.
Pada setiap rekursi, fungsi akan memeriksa apakah indeks akhir r lebih besar atau sama dengan indeks awal l. Jika ya,
fungsi akan mencari indeks tengah mid array, dan memeriksa apakah elemen pada indeks tersebut sama dengan elemen yang
ingin dicari. Jika iya, maka fungsi akan mengembalikan indeks mid.

Jika elemen pada indeks mid lebih besar dari elemen yang ingin dicari x, maka pencarian akan dilanjutkan pada setengah
kiri array. Jika elemen pada indeks mid lebih kecil dari elemen yang ingin dicari x, maka pencarian akan dilanjutkan
pada setengah kanan array. Pencarian akan terus dilakukan secara rekursif sampai ditemukan elemen yang dicari atau indeks
awal l lebih besar dari indeks akhir r. Jika elemen tidak ditemukan, maka fungsi binarySearch akan mengembalikan nilai -1.

Pada fungsi main, array arr berisi beberapa angka yang telah diurutkan, dan elemen yang ingin dicari adalah angka 10. Kemudian
fungsi binarySearch dipanggil dengan parameter array arr, indeks awal 0, indeks akhir n-1, dan elemen yang ingin dicari 10.
Hasil pencarian disimpan pada variabel result, dan kemudian dicetak pada layar. Jika nilai result adalah -1, maka program akan
mencetak pesan "Element is not present in array", sedangkan jika nilai result bukan -1, maka program akan mencetak pesan
"Element is present at index result".
```

#### Latihan 7

```
Program yang ditunjukkan adalah implementasi algoritma binary search dalam bahasa pemrograman C.

Algoritma ini digunakan untuk mencari elemen tertentu di dalam sebuah array yang telah diurutkan
secara terurut meningkat.

Pada program ini, terdapat sebuah array tabInt yang berisi beberapa bilangan bulat yang telah diurutkan
secara terurut meningkat. Kemudian, user diminta memasukkan data yang ingin dicari pada array tersebut
dengan menggunakan fungsi scanf.

Selanjutnya, program melakukan pencarian dengan menggunakan algoritma binary search. Pada awalnya, variabel i
diinisialisasi dengan nilai 0 dan variabel j diinisialisasi dengan nilai 9, yang merupakan indeks pertama dan
indeks terakhir dari array tabInt. Kemudian, variabel ketemu diinisialisasi dengan nilai 0.

Pencarian dilakukan dalam loop while selama nilai ketemu masih sama dengan 0 dan nilai i tidak lebih besar dari
nilai j. Pada setiap iterasi, indeks tengah k dari array tabInt dihitung dengan menggunakan rumus (int)(i + j) / 2.

Selanjutnya, program memeriksa apakah elemen pada indeks k sama dengan data yang dicari cariData. Jika ya,
maka program mengubah nilai ketemu menjadi 1. Jika elemen pada indeks k lebih besar dari cariData, maka pencarian
dilanjutkan pada setengah kiri array dengan mengubah nilai variabel j menjadi k-1. Jika elemen pada indeks k lebih
kecil dari cariData, maka pencarian dilanjutkan pada setengah kanan array dengan mengubah nilai variabel i menjadi k+1.

Jika setelah dilakukan pencarian, nilai ketemu sama dengan 1, maka program mencetak pesan "Data cariData terdapat
pada kumpulan data". Jika nilai ketemu masih sama dengan 0, maka program mencetak pesan "Data cariData tidak
terdapat pada kumpulan data".
```

#### Tugas

```
Program di atas merupakan implementasi dari pencarian data menggunakan metode sequential search dan
binary search pada data mahasiswa yang memiliki 4 data, yaitu NIM, Nama, TTL, dan IPK. Kunci yang digunakan
untuk pencarian data adalah NIM.

Pada program ini terdapat dua fungsi pencarian yaitu sequentialSearch dan binarySearch. Fungsi sequentialSearch
melakukan pencarian data secara berurutan dari data pertama hingga data terakhir pada array data mahasiswa. Fungsi
ini akan mengembalikan indeks dari data yang ditemukan atau -1 jika data tidak ditemukan.

Fungsi binarySearch melakukan pencarian data dengan membagi array data mahasiswa menjadi dua bagian dan mencari pada
bagian yang lebih mungkin terdapat data yang dicari. Proses pencarian dilakukan dengan membandingkan data yang dicari
dengan data pada bagian tengah array. Jika data yang dicari lebih kecil dari data pada bagian tengah, maka pencarian
dilanjutkan pada bagian kiri array, dan sebaliknya jika data yang dicari lebih besar dari data pada bagian tengah,
maka pencarian dilanjutkan pada bagian kanan array. Fungsi ini juga akan mengembalikan indeks dari data yang ditemukan
atau -1 jika data tidak ditemukan.

Pada program utama, terdapat array data mahasiswa yang berisi 5 data. Kemudian program meminta input NIM yang ingin
dicari dan melakukan pencarian dengan menggunakan kedua fungsi pencarian yang telah dibuat sebelumnya. Jika data ditemukan,
program akan menampilkan informasi tentang data tersebut seperti Nama, TTL, dan IPK. Jika data tidak ditemukan, program
akan menampilkan pesan bahwa data tidak ditemukan.
```

## [Jobsheet 12](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%2012)

#### Latihan 1 ( Program CPP )

```
Program ini adalah sebuah program C ++ yang mengimplementasikan struktur data pohon pencarian biner untuk
menyimpan data siswa, yang meliputi nomor, nama, NIM, dan email mereka. Program ini memungkinkan pengguna untuk
memasukkan data, dan melakukan berbagai jenis traversal pohon: in-order, pre-order, dan post-order. Program ini
juga menghitung tinggi pohon.

Pohon pencarian biner diimplementasikan menggunakan struct yang disebut tree_node, yang memiliki pointer ke node
anak kiri dan kanannya, dan ke node sementara, bantuan, dan ketinggian. Program utama menggunakan pendekatan
berbasis menu untuk memungkinkan pengguna berinteraksi dengan pohon. Fungsi insert() digunakan untuk memasukkan
data ke dalam pohon. Fungsi inorder(), preorder(), dan postorder() digunakan untuk melakukan berbagai jenis
traversal pohon. Fungsi height() menghitung tinggi pohon.

Program tampaknya ditulis dengan baik dan kodenya dapat dibaca. Namun, ada beberapa perbaikan yang dapat dilakukan pada kode:
- Fungsi insert() harus memeriksa apakah data yang dimasukkan sudah ada di pohon, dan menangani duplikat yang sesuai.
- Fungsi insert() dapat menggunakan algoritme yang lebih efisien untuk menemukan posisi yang tepat untuk menyisipkan
  node baru, seperti algoritme rekursif.
- Fungsi height() dapat menggunakan memoisasi untuk meng-cache ketinggian setiap node, untuk menghindari perhitungan
  yang tidak perlu.
```

#### Latihan 2 ( Program C )

```
Program ini adalah sebuah implementasi dari struktur data tree dalam bahasa C. Program ini
menunjukkan bagaimana membuat struktur data tree, mengisi node dalam tree dengan nilai, melakukan
pencarian nilai tertentu dalam tree, serta mengekstrak nilai-nilai dalam tree dengan berbagai
cara (pre-order, in-order, dan post-order traversal).

Pada program ini, terdapat struct node yang memiliki tiga komponen yaitu data, leftChild, dan
rightChild. Data berisi nilai yang disimpan dalam node, leftChild dan rightChild adalah pointer
ke node anak kiri dan anak kanan.

Fungsi insert digunakan untuk menyisipkan nilai ke dalam tree. Fungsi ini akan mengecek apakah
tree kosong atau tidak. Jika kosong, maka nilai akan ditambahkan sebagai root. Jika tidak kosong,
maka akan dilakukan iterasi untuk menemukan posisi yang tepat untuk menyisipkan nilai.
Fungsi search digunakan untuk mencari nilai tertentu dalam tree. Fungsi ini akan melakukan iterasi
pada setiap node dalam tree dan membandingkan nilai dengan nilai yang dicari.
Fungsi pre_order_traversal, inorder_traversal, dan post_order_traversal digunakan untuk mengekstrak
nilai dalam tree dengan cara yang berbeda-beda. pre_order_traversal akan menampilkan nilai dari root,
diikuti oleh nilai dari subtree kiri, dan nilai dari subtree kanan. inorder_traversal akan menampilkan
nilai dari subtree kiri, nilai dari root, dan nilai dari subtree kanan. post_order_traversal akan
menampilkan nilai dari subtree kiri, nilai dari subtree kanan, dan nilai dari root.
Program ini memiliki array yang berisi beberapa nilai, yang akan disisipkan ke dalam tree menggunakan
fungsi insert. Kemudian, nilai tertentu akan dicari menggunakan fungsi search. Akhirnya, program ini
akan menampilkan nilai dalam tree menggunakan fungsi pre_order_traversal, inorder_traversal, dan post_order_traversa
```

#### Latihan 3 ( Program C )

```
Program ini adalah sebuah impilimentasi adalah program C untuk melakukan traversing pada
sebuah pohon biner. Program ini menggunakan tiga fungsi untuk melakukan tiga jenis traversing
yang berbeda, yaitu:
- Fungsi printPreorder untuk melakukan pre-order traversal pada pohon biner.
- Fungsi printInorder untuk melakukan in-order traversal pada pohon biner.
- Fungsi printPostorder untuk melakukan post-order traversal pada pohon biner.

Program ini menggunakan struktur data node untuk merepresentasikan setiap simpul pada pohon biner.
Setiap simpul pada pohon biner memiliki tiga atribut, yaitu data yang merepresentasikan nilai data
pada simpul tersebut, serta pointer ke simpul-simpul kiri dan kanan.

Program ini mengalokasikan memori untuk setiap simpul baru dengan menggunakan fungsi newNode,
yang mengalokasikan memori dengan ukuran yang sesuai menggunakan malloc dan menginisialisasi
nilai-nilai default dari simpul baru yang dibuat.

Dalam fungsi main, sebuah pohon biner dengan lima simpul dibuat, dan kemudian dilakukan tiga jenis
traversing menggunakan fungsi-fungsi yang telah didefinisikan sebelumnya, yaitu pre-order, in-order,
dan post-order. Setelah itu, program menunggu input dari pengguna sebelum keluar.
```

## [Jobsheet 13](https://github.com/ProskaTech/data-structures---lab-work-selasa-d-whyisn/tree/master/Jobsheet%2013)

### Percobaan 1 ( DFS 1 )

```
Program ini adalah mengimplementasikan Depth-First Search (DFS) pada struktur data Graph
menggunakan representasi adjacency list. DFS digunakan untuk traversal atau penjelajahan pada graph.
Berikut adalah penjelasan singkat mengenai program tersebut:

Fungsi createNode digunakan untuk membuat node baru pada adjacency list dengan vertex v.

Struct Graph menyimpan informasi mengenai graph, termasuk jumlah vertices (numVertices),
array adjacency lists (adjLists), dan array visited untuk melacak node yang sudah dikunjungi.

Fungsi createGraph digunakan untuk membuat graph baru dengan vertices sebagai jumlah vertices.

Fungsi ini mengalokasikan memori dan menginisialisasi array adjacency lists dan array visited.

Fungsi addEdge digunakan untuk menambahkan edge antara vertex src dan dest. Ini dilakukan dengan
membuat node baru dan menghubungkannya dengan adjacency list dari kedua vertex tersebut.

Fungsi printGraph digunakan untuk mencetak adjacency list dari setiap vertex pada graph.

Fungsi DFS melakukan traversal DFS pada graph dengan memulai dari vertex vertex. Fungsi ini
menggunakan rekursi untuk menjelajahi vertex yang terhubung dengan vertex saat ini. Ketika vertex
dikunjungi, status visited-nya diubah menjadi 1 dan vertex tersebut dicetak.

Di dalam fungsi main, graph dibuat dengan memanggil fungsi createGraph dengan jumlah vertices 4.
Kemudian, edge-edge ditambahkan menggunakan addEdge untuk membentuk graph yang terdiri dari 4
vertices dengan hubungan yang ditentukan.
Setelah itu, adjacency list dari graph dicetak menggunakan fungsi printGraph.
Terakhir, fungsi DFS dipanggil untuk melakukan DFS traversal pada graph, dimulai dari vertex 2.
Program ini akan mencetak adjacency list dari graph dan melakukan traversal DFS pada graph tersebut,
mencetak setiap vertex yang dikunjungi.
```

### Percobaan 2 ( DFS 2 )

```
Program ini adalah mengimplementasikan Depth-First Search (DFS) pada struktur data Graph
menggunakan representasi adjacency matrix. DFS digunakan untuk traversal atau penjelajahan pada graph.
Berikut adalah penjelasan singkat mengenai program tersebut:

Struct Vertex digunakan untuk menyimpan informasi mengenai setiap vertex pada graph, termasuk label (label)
dan status visited (visited).

Stack (stack) digunakan untuk melacak vertex yang sedang diproses selama traversal DFS.

Array adjacency matrix (adjMatrix) digunakan untuk menyimpan informasi hubungan antara vertices pada graph.

Array of vertices (lstVertices) digunakan untuk menyimpan pointer ke setiap vertex pada graph.

Variabel vertexCount menyimpan jumlah vertices pada graph.

Fungsi push digunakan untuk memasukkan item ke dalam stack.

Fungsi pop digunakan untuk mengambil item teratas dari stack.

Fungsi peek digunakan untuk melihat item teratas pada stack.

Fungsi isStackEmpty digunakan untuk memeriksa apakah stack kosong atau tidak.

Fungsi addVertex digunakan untuk menambahkan vertex baru ke dalam vertex list dengan label yang ditentukan.

Fungsi addEdge digunakan untuk menambahkan edge antara dua vertices dengan mengatur nilai pada adjacency matrix.

Fungsi displayVertex digunakan untuk mencetak label dari sebuah vertex.

Fungsi getAdjUnvisitedVertex digunakan untuk mendapatkan index dari vertex yang terhubung dan belum dikunjungi.

Fungsi depthFirstSearch merupakan implementasi DFS.
Pada awalnya, vertex pertama (S) ditandai sebagai visited, dicetak, dan dimasukkan ke dalam stack.
Selama stack tidak kosong, dilakukan iterasi untuk mencari vertex terhubung yang belum dikunjungi.
Jika ditemukan, vertex tersebut ditandai sebagai visited, dicetak, dan dimasukkan ke dalam stack.
Jika tidak ditemukan, vertex teratas pada stack dihapus. Setelah traversal selesai, status visited
semua vertex direset.
Di dalam fungsi main, adjacency matrix diinisialisasi dengan 0. Kemudian, vertex-vertex ditambahkan ke
dalam vertex list menggunakan addVertex. Selanjutnya, edge-edge ditambahkan menggunakan addEdge untuk
membentuk graph yang terdiri dari 5 vertices dengan hubungan yang ditentukan. Terakhir, fungsi depthFirstSearch
dipanggil untuk melakukan DFS traversal pada graph, dimulai dari vertex pertama (S).
Program ini akan mencetak hasil dari traversal DFS pada graph
```

### Percobaan 3 ( DFS 3 )

```
Program ini adalah implementasi Depth-First Search (DFS) pada struktur data graph menggunakan
representasi adjacency matrix. Berikut adalah penjelasan singkat mengenai program tersebut:

Fungsi DFS adalah fungsi rekursif untuk melakukan traversal DFS pada graph. Pada setiap pemanggilan rekursif, fungsi ini akan menerima parameter i yang merupakan indeks vertex yang sedang diproses.

Di dalam fungsi DFS, vertex yang sedang diproses akan dicetak menggunakan perintah printf("\n%d", i);. Ini menunjukkan urutan vertex yang dikunjungi selama traversal DFS.

Vertex yang sedang diproses akan ditandai sebagai visited dengan mengatur visited[i] = 1;.

Selanjutnya, dilakukan iterasi pada semua vertex terhubung dengan vertex i. Jika vertex tersebut belum dikunjungi
(!visited[j]) dan terdapat edge antara vertex i dan vertex j (G[i][j] == 1), maka dilakukan pemanggilan rekursif DFS(j)
untuk melanjutkan traversal dari vertex j.

Di dalam fungsi main, program akan meminta jumlah vertices kepada pengguna melalui input scanf("%d", &n);.

Kemudian, adjacency matrix dari graph akan dimasukkan oleh pengguna melalui input scanf("%d", &G[i][j]);.

Setelah itu, array visited akan diinisialisasi dengan 0, menandakan bahwa belum ada vertex yang dikunjungi.

Traversal DFS dimulai dari vertex 0 dengan pemanggilan DFS(0);.

Hasil traversal DFS berupa urutan vertex yang dikunjungi akan dicetak ke layar menggunakan printf("\n%d", i);.

Program ini akan mencetak urutan vertex yang dikunjungi selama traversal DFS berdasarkan adjacency matrix yang dimasukkan oleh pengguna.
```

### Percobaan 4 ( DFS 4 )

```
Program ini adalah implementasi Depth-First Search (DFS) pada struktur data graph, menggunakan adjacency matrix.
Berikut adalah penjelasan singkat mengenai program tersebut:

Fungsi dfs adalah fungsi rekursif untuk melakukan traversal DFS pada graph. Fungsi ini menerima parameter v yang
merupakan vertex yang sedang diproses.

Di dalam fungsi dfs, vertex yang sedang diproses akan ditandai sebagai "reachable" dengan mengatur reach[v] = 1;.

Selanjutnya, dilakukan iterasi pada semua vertex yang terhubung dengan vertex v. Jika terdapat edge antara
vertex v dan vertex i (a[v][i] bernilai true) dan vertex i belum terjangkau (!reach[i]), maka dilakukan
pemanggilan rekursif dfs(i) untuk melanjutkan traversal dari vertex i.

Di dalam fungsi main, program akan meminta jumlah vertices kepada pengguna melalui input scanf("%d", &n);.

Kemudian, adjacency matrix dari graph akan dimasukkan oleh pengguna melalui input scanf("%d", &a[i][j]);.

Setelah itu, array reach akan diinisialisasi dengan 0, menandakan bahwa belum ada vertex yang terjangkau.

Traversal DFS dimulai dari vertex 1 dengan pemanggilan dfs(1);.

Hasil traversal DFS akan dicetak ke layar dengan format v1->v2, yang menunjukkan adanya edge dari
vertex v1 ke vertex v2.

Setelah selesai melakukan traversal DFS, dilakukan pengecekan apakah semua vertex telah
terjangkau atau tidak. Jika semua vertex terjangkau, maka graph dianggap terhubung. Jika ada vertex
yang tidak terjangkau, maka graph dianggap tidak terhubung.

Hasil status keterhubungan graph (terhubung atau tidak terhubung) akan dicetak ke layar menggunakan printf.
Program ini akan mencetak urutan traversal DFS dan memberikan status keterhubungan graph berdasarkan adjacency matrix yang dimasukkan oleh pengguna.
```
