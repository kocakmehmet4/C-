KTU BİL 2011 Nesne Yönelimli Programlama Dönem Ödevi
Proje amaç: Bu ödevin amacı (1) C++ programlama dilinin temellerini (2) kalıtım kavramını
(3) Diskteki dosyayı okumayı ve bunlara yazmayı (4) operatör aşırı yüklemeyi öğrenmenizi
sağlamaktır.
Yapılacak iş: C++ programı kullanılarak bir kıyafet sepeti yazılımı gerçekleştirilecektir. Bu
yazılım müşterilere kıyafet seçenekleri sunabilmekte ve aldığı siparişler doğrultusunda
faturalandırma yapabilmektedir. Aynı zamanda müşteriye verdiği siparişin zamansal takibini
yapma imkanı vermektedir.
Gösterilecek ana menüde:
1. Sisteme giriş
2. Üye kaydı
3. Çıkış menüleri yer alacaktır.
Sisteme giriş menüsünde
1. Yönetici girişi
2. Müşteri girişi olmak üzere iki alt modül oluşturulacaktır.
Yönetici girişi yapılması durumunda yönetici şifresi kontrol edilerek ilgili yöneticinin
sisteme giriş yapması sağlanacaktır. Bu kontrol kayıt esnasında oluşturulacak olan
kullanıcılar.txt isimli dosyadan yararlanılarak gerçekleştirilecektir. Kontrol sonucunda
başarılı bir giriş yapılması durumunda ekranda aşağıdaki işlemler görüntülenecek ve bu
işlemler gerçekleştirilecektir.
1. Kıyafet kategorilerinin yer aldığı dosyalara ürün girişinin yaptırılması
2. Sisteme kurye eklenmesi
3. Şikâyet ve öneri okunması
4. Kullanıcıya indirim kodu tanımlaması
5. Yapılan siparişlerin faturalarının görüntülemesi
Müşteri girişi yapılması durumunda kullanıcı adı ve şifresi kontrol edilerek ilgili
kullanıcının sisteme giriş yapması sağlanacaktır. Bu kontrol kayıt esnasında oluşturulacak
olan kullanıcılar.txt isimli dosyadan yararlanılarak gerçekleştirilecektir. Kontrol sonucunda
başarılı bir giriş yapılması durumunda ekrana:
1. Kıyafet kategorilerinin gösterimi ve ürün seçimi
2. Sipariş Takip
3. Şikayet/Öneriler(Geri bildirimler)
4. Şifre Değiştir
5. Geri Dön.
alt menüleri gelecektir.
1. Kıyafet kategorilerini göster menüsünde Elbise, Tişört, Pantolon, Gömlek, Etek ve
Ayakkabı olmak üzere altı alt kategori listelenecektir. Bu alt kategorilerdeki ürün ve ürün
bilgileri kullanıcıya gösterilecektir. Kullanıcı bu menü üzerinden gerekli seçim ya da
seçimleri yapabilecektir. Bir siparişte birden çok kıyafet seçimi yapılabilecektir. Kıyafet
seçiminden sonra ise kıyafet özelleştir menüsü açılacaktır. Bu menüde seçilen kıyafete
uygun beden numara ve renk bilgisi sunulacaktır. Kullanıcılar bu bilgilere göre seçimini
tamamlayacaktır. İlgili seçimler tamamlandıktan sonra tüm yapılan siparişler için
müşteriye detaylı bir fatura oluşturulup gösterilecektir. Fatura içerisinde Müşteri adı,
Ürün sipariş zamanı, sipariş bilgileri ve fiyat bilgilerine yer verilecektir.
2. Sipariş takip menüsünde verilen sipariş bilgileri ve siparişin ulaşım süresi kullanıcıya
gösterilecektir. Ulaşım süresinin hesaplanmasında yöneticinin belirlediği kurye sayısı ve
siparişin gönderilecek olduğu adres bilgisi dikkate alınacaktır. Aşağıda ulaşım süresinin
hesaplanmasına dair örnek bir durum verilmiştir.
Tablo 1. Mesafe Erişim Süreleri
Varış Noktası Süre (dk)
Ortahisar 35
Akçaabat 50
Vakfıkebir 90
Beşikdüzü 110
Yomra 55
Arsin 70
Araklı 100
Tablo 2. Örnek Kurye sipariş ulaşım zaman çizelgesi (1.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 ? Araklı 10:35 100
7 ? Arsin 10:40 70
8 ? Beşikdüzü 10:50 110
9 ? Araklı 11:00 100
10 ? Vakfıkebir 11:30 90
Tablo 3. Örnek Kurye sipariş ulaşım zaman çizelgesi (2.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 3 Araklı 10:35 100 10:45 + 100 =
12:25
7 ? Arsin 10:40 70
8 ? Beşikdüzü 10:50 110
9 ? Araklı 11:00 100
10 ? Vakfıkebir 11:30 90
Tablo 4. Örnek Kurye sipariş ulaşım zaman çizelgesi (3.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 3 Araklı 10:35 100 12:25
7 2 Arsin 10:40 70 11:00 + 70 =12:10
8 ? Beşikdüzü 10:50 110
9 ? Araklı 11:00 100
10 ? Vakfıkebir 11:30 90
Tablo 5. Örnek Kurye sipariş ulaşım zaman çizelgesi (4.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 3 Araklı 10:35 100 12:25
7 2 Arsin 10:40 70 12:10
8 4 Beşikdüzü 10:50 110 11:00 + 110 =
12:50
9 ? Araklı 11:00 100
10 ? Vakfıkebir 11:30 90
Tablo 6. Örnek Kurye sipariş ulaşım zaman çizelgesi (5.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 3 Araklı 10:35 100 12:25
7 2 Arsin 10:40 70 12:10
8 4 Beşikdüzü 10:50 110 12:50
9 5 Araklı 11:00 100 11:05 + 100 =
12:45
10 ? Vakfıkebir 11:30 90
Tablo 7. Örnek Kurye sipariş ulaşım zaman çizelgesi (6.Adım)
Sipariş
No
Kurye
No
Varış
Noktası
Sipariş başlangıç
zamanı
Süre Sipariş ulaşım
zaman
1 1 Vakfıkebir 10:00 90 11:30
2 2 Yomra 10:05 55 11:00
3 3 Ortahisar 10:10 35 10:45
4 4 Akçaabat 10:10 50 11:00
5 5 Ortahisar 10:30 35 11:05
6 3 Araklı 10:35 100 12:25
7 2 Arsin 10:40 70 12:10
8 4 Beşikdüzü 10:50 110 12:50
9 5 Araklı 11:00 100 12:45
10 1 Vakfıkebir 11:30 90 11:30 + 90 = 13:00
3. Şikâyet/Öneri menüsünde müşterinin ürün ve sistem ile ilgili görüş ve önerileri öneri.txt
dosyasında saklanacaktır. Bu şikâyet ve öneriler yönetici tarafından görüntülenebilecektir.
4. Şifre Değiştir menüsünde müşteri kendi şifresini değiştirebilecektir.
5. Geri dön menüsünde ise bir önceki menüye geri dönüş yapılması gerçekleştirilecektir.
Üye kaydı menüsünde müşterilerin gerekli bilgileri alınarak kullanıcılar.txt dosyasına
yazılacaktır. Üye kaydı esnasında girilen epostanın geçerliliği test edilecektir. Benzer şekilde
kullanıcıdan alınan doğum tarihi bilgilerinin gün, ay ve yıl olarak uygun formatta yazıldığı
kontrol edilecektir. Şifre belirlenirken girilen şifre yerine ekranda * karakteri gösterilecektir.
Bunun yanında belirlenen şifrenin olası saldırılara karşı dayanıklılığı program tarafından test
edilip kullanıcı bilgilendirilecektir. Ve uygun güçlü şifre girmesi istenecektir.
Not: Zaman sınıfından türetilen nesneler üzerindeki aritmetik işlemler operatör aşırı yükleme
yapılarak gerçekleştirilecektir.
Aşağıda kullanılacak sınıflar, sınıflara ait veri üyeleri ve sınıflar arasındaki miras ilişkileri
verilmektedir. Gerçekleştirecek olduğunuz projede bu sınıflar ve veri üyeleri dışında ek
olarak sınıf ve veri üyesi kullanabilirsiniz.
Ödevin Gönderilmesi: Gönderilecek ödev dosyası sadece bir kaynak dosya içermeli ve
dosya adı grup numarası ve öğrenci adlarını içermelidir. Cpp dosyasının en başına grup
numaranızı, adınızı, öğrenci numaranızı yorum satırı olarak ekleyiniz. Kodunuzdaki önemli
kısımları gerek ekran çıktıları gerekse de yalancı kodlarla anlatacağınız bir ödev raporu
oluşturulacaktır. Ödev raporu da yine kaynak dosya ile teslim edilecektir.
Değerlendirme
1. Programın tüm menülerinin verilen sınıflara uygun olarak doğru ve tam çalışması %50
2. Nesne yönelimli programlama kavramlarının (class, inheritance, file reading/writing,
operatör overloading ve function overloading) kavramlarının amacına uygun kullanılmış
olması %30
3. Gerçekleştirilen yazılımın kullanıcı dostu olması %10
4. Rapor %10
