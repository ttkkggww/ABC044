# ABC044
ABC044をやりました。
以下雑記
A,B,C問題は問題なく解けました。C問題で3重ループを使ったDPをしましたが、以前より綺麗に書けた気がします。

D問題は解説を見ました。計算量の評価と式変形が難しいと思いました。
b<sqrt(n)とp<sqrt(n)で探索を分けることが大切だったと思います。
b > sqrt(n) の時、
n = pq(b進数)を考えます。この時p,q<b
n = p*b + q;
p + q = s;
∴ b = (n - s)/p + 1;
n = p*b + q >= p*b > p*p
この式に+1が出てくるところ、(n-s)%p==0なところが面白いです。
