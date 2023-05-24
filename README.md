# Arduino-map-function
Arduino map function but code

İlk olarak, `sensorValue` değişkeni 512 olarak tanımlanır. Bu, dönüştürülecek olan sensör verisini temsil eder.

 `oldMin` ve `oldMax` değişkenleri, dönüştürülecek değerin bulunduğu eski aralığı temsil eder. Bu örnekte, sensörden alınan değer 0-1023 aralığında olduğunu varsayalım.

 `newMin` ve `newMax` değişkenleri, dönüştürülen değerin olmasını istediğiniz yeni aralığı temsil eder. Bu örnekte, dönüştürülen değerin 0-255 aralığında olmasını istedik.

 `mappedValue` değişkeni, `sensorValue` değerini eski aralıktan yeni aralığa dönüştürmek için hesaplanan formülü kullanır.

   - İlk olarak, `sensorValue`'dan `oldMin` çıkarılır. Bu, eski aralıktaki değerin ne kadar ileride olduğunu temsil eder.
   - Sonra, `(newMax - newMin)` ile eski aralık ve yeni aralık arasındaki fark hesaplanır.
   - Ardından, bu iki değer çarpılır ve `(oldMax - oldMin)` ile bölünür. Bu, orantıyı korumak için yapılır.
   - Son olarak, `newMin` eklenir ve dönüştürülen değer elde edilir.

 `setup()` fonksiyonunda, seri iletişim başlatılır.

 `loop()` fonksiyonu sürekli olarak çalışır.

   - `mappedValue` değeri seri porta yazdırılır.
   - `delay(1000)` fonksiyonu ile 1 saniye beklenir.

Bu şekilde, `mappedValue` değişkeni, `sensorValue` değerini eski aralıktan yeni aralığa dönüştürür ve bu değer seri port üzerinden gösterilir. Bu sayede sensör verisini dönüştürerek istediğiniz aralığa getirebilirsiniz.
