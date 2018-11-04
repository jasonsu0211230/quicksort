

# programming-assignment-1-jasonsu0211230

**prog-1**
---------
	使用前中後的median當作pivot的方法，做法是用一個找3個數字的median 的函式findmed,找出來並把它移到最左邊當作pivot。
	之後用兩個參數，一個從左邊開始，找到比pivot大的數字就先停下，另一個也一樣從右邊開始，當兩個數字都停下時，用swap函式調換。
	最後把pivot從最左邊調到第二個參數停下的位置，然後再傳回左半邊後右半邊，形成遞迴。

**prog-2**
----------


 是使用亂數當作pivot,做法是用rand()隨機從一連串數字裡挑一個當pivot，並把它移到最右邊，之後就跟prog-1一樣。
**prog-3**
------

*是使用前面3個數字的med1,和中間三個數字的med2和最後面三個數字的med3,三個median再用findmed取得med,當作pivot並移到最左邊,之後跟前面兩個一樣。

**perofrmance comparison**
--------------------------

    10 data prog1:5ms  prog2:9ms   prog3:5ms
    18 data prog1:6ms  prog2:5ms   prog3:8ms 

**analysis**
--------

    prog2 的時間變化會比較大，有可能選到中間的pivot，執行可以比較快，反之就比較慢。
    prog1 和 prog3 的差別在於找中位數的時間，若樣本變大，則prog3需要比較多時間找median,每次quicksort需要比prog2多找3次median,因此除非剛好前中後的median是個很差的pivot,prog1的執行時間才會比較久。
    總結來說，穩定性3>1>2，最少時間2>1>3



    
