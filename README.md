# C Programming Language

``` c
// standard library
#include <stdio.h>

// type definitions (int is 4 bytes) and main function (entry point)
int main(void) {
    // print to stdout
    printf("Hello, World!");
    // return 0 to indicate success
    return 0;
}
```

## compile and run

``` bash
gcc hello.c -o hello && .\hello.exe
Hello, World!
```

## Types

### Char

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| char | 1byte | 8bit | -2 ^ 8 to 2 ^ 8 -1 |
| signed char | 1byte | 8bit | -2 ^ 8 to 2 ^ 8 -1 |
| unsigned char | 1byte | 8bit | 0 to 2 ^ 8 |

### Int

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| int | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| signed int | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| unsigned int | 4bytes | 32bit | 0 to 2 ^ 32 |
| short int | 2bytes | 16bit | -2 ^ 16 to 2 ^ 16 -1 |
| signed short int | 2bytes | 16bit | -2 ^ 16 to 2 ^ 16 -1 |
| unsigned short int | 2bytes | 16bit | 0 to 2 ^ 16 |
| long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| signed long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| unsigned long int | 8bytes | 64bit | 0 to 2 ^ 64 |
| long long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| signed long long int | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| unsigned long long int | 8bytes | 64bit | 0 to 2 ^ 64 |

### Float

| type | size | bit length | range |
| :---: | --- | ---: | :---: |
| float | 4bytes | 32bit | -2 ^ 32 to 2 ^ 32 -1 |
| double | 8bytes | 64bit | -2 ^ 64 to 2 ^ 64 -1 |
| long double | 16bytes | 128bit | -2 ^ 128 to 2 ^ 128 -1 |

### References

<details>
<summary>links</summary>

[C言語 - Wikipedia](https://ja.wikipedia.org/wiki/C%E8%A8%80%E8%AA%9E#%E4%B8%BB%E3%81%AAC%E8%A8%80%E8%AA%9E%E5%87%A6%E7%90%86%E7%B3%BB)

[34.21. libpqプログラムの構築](https://www.postgresql.jp/document/14/html/libpq-build.html)

[C言語でPostgreSQLを使う - Qiita](https://qiita.com/Ki4mTaria/items/e971321db88beb101c6d)

[第34章 libpq — C ライブラリ](https://www.postgresql.jp/document/14/html/libpq.html)

[C言語 scanfは使わない!! 文字列,数値の読み込み - THINK CODE](http://blog.livedoor.jp/katsura_function-dromusic/archives/1034677654.html)

[文字の扱い方 - 苦しんで覚えるC言語](https://9cguide.appspot.com/14-01.html)

[配列の要素数を調べる - C言語入門](https://kaworu.jpn.org/c/%E9%85%8D%E5%88%97%E3%81%AE%E8%A6%81%E7%B4%A0%E6%95%B0%E3%82%92%E8%AA%BF%E3%81%B9%E3%82%8B)

[C++の後継目指すプログラミング言語「Carbon Language」、Googleの技術者が実験的公開。C++は技術的負債で改良が困難と － Publickey](https://www.publickey1.jp/blog/22/ccarbon_languagegooglec.html)

[Introduction — xeus-cling documentation](https://xeus-cling.readthedocs.io/en/latest/)

[jupyterlab/jupyterlab at 3.6.x](https://github.com/jupyterlab/jupyterlab/tree/3.6.x)

[一週間で身につくC言語の基本|資料1：C言語の学習に役立つ書籍](https://c-lang.sevendays-study.com/appendix1.html)

[C から libpq を使って PostgreSQL に接続してみる - Qiita](https://qiita.com/tom-sato/items/aefc32addb2a1036a2b9)

[データ型](http://www.kusa.ac.jp/~kajiura/c/data/newpage1.htm)

[C言語 getchar関数の使い方【対話プログラムの作り方紹介】](https://monozukuri-c.com/langc-funclist-getchar/)

[C言語　構造体配列の要素数を取得する方法 - 甘ちゃんSEの自己変革ブログ](https://a-ma-chan.hatenablog.com/entry/2014/03/31/175449)

[time_t - Wikipedia](https://ja.wikipedia.org/wiki/Time_t#:~:text=time_t%20%E5%9E%8B%E3%81%AF%E3%80%81%E3%82%B7%E3%82%B9%E3%83%86%E3%83%A0%E6%99%82%E5%88%BB,%E3%81%AB%E3%82%88%E3%81%A3%E3%81%A6%E5%AE%9A%E7%BE%A9%E3%81%95%E3%82%8C%E3%81%A6%E3%81%84%E3%82%8B%E3%80%82)

[printfとscanfについて - プログラマ専用SNS ミクプラ](https://dixq.net/forum/viewtopic.php?t=372)



</details>

