به نام خدا
عنوان درس : آزمایشگاه ریزپردازنده 
نام استاد: جناب آقای دکتر عباسی
 نام دانشجو: ملیکا طیبی
 هدف آزمایش: تست میکرو با دیودهای نوری
ابزار و وسایل: برد آردینو (مدل uno)، ۴ عدد سیم مخابراتی، بردبورد، ۲ عدد مقاومت ، ۲ عدد چراغled
شرح آزمایش: بورد را به وسیله کابل USB به سیستم متصل میکنیم و از قسمت tools نوع برد آردینو و همچنین نوع port یا همان(com) را در حافظه سیستم انتخاب میکنیم که گاهی به صورت پیغام بر روی صفحه نمایان می شود .  


(IMG_20241012_223824.jpg)[عکس شماتیک]!       

Tools >> bord 


ArdinoUno>>ArdinoAvR bords
بعد از این مراحل میتوانیم کد زدن و بستن مدار را آغاز کنیم. ابتدا نوع دو خانه ۸ و ۱۲ را وارد میکنیم
int led = 12;
int led1 = 13;
و در قسمت setup, نوع حالت های LED ها را مشخص می کنیم .
pinMode ( led1 ,OUTPUT);
pinMode (led2,OUTPUT);
که led ها اینجا شماره پایه هایی هستند ک استفاده میکنیم و OUTPUT نوع حالت (ورودی یا خروجی) است. در خروجی void loop در این قسمت با استفاده از کد دستوری digitalWrite, کار هر خانه برد را مشخص می کنیم. و با کد دستوری delay زمان توقف (ms) بین هر دستور را مشخص میکنیم .
    digitalWrite(led1 , HIGH); دستور روشن کردن
    delay(1000);
    digitalWrite( led2,LOW);
    delay(1000);
     }
در نتیجه کد ما بعد از بستن مدار به این صورت کار کند .
چراغ اول روشن میشه 1 ثانیه صبر میکنه بعد خاموش میشه و بعد یک ثانیه صبر میکنه و این بار چراغ دوم روشن میشه و بعد از یک ثانیه چراغ دوم هم خاموش میشه
بخش عملی: بر روی بردبورد دو سیم مخابراتی را به پایه های مثبت LED ها و بعد به خانه های ۸ و ۱۲متصل کرده . دو مقاومت را یکی در یک ستون از پایه منفی LED قرار می دهیم و با سیم مخابراتی به بخش بعدی برد بورد وصل میکنیم سیم های مخابراتی نباید در یک ردیف باشند. سپس باید سیم مخابراتی ک در همان ردیف در زمین برد بورد هست به قسمت زمین برد آردینو وصل کنیم. در نتیجه پس از خطایابی و آپلود آن توضیحاتی ک در قسمت کد گفتیم را به صورت مدار زیر مشاهده میکنیم.
(IMG_20241012_223201_013.jpg)[عکس مدار]!


 
