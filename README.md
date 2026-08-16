*This project has been created as part of the 42 curriculum by mumidill.*

# Libft

## Açıklama


Libft, gelecekte ihtiyaç duyacağımız fonksiyonlara sahip bir kütüphane projesidir.

## Talimatlar
`make all` : libft.a dosyasını derler.

`make clean` : obje dosyalarını kaldırır.

`make fclean` : obje dosyalarını ve libft.a dosyasını kaldırır.

`make re` : sırasıyla fclean ve all fonksiyonlarının işlevlerini yerine getirir.

Kullanmak için projenize `#include "libft.h"` şeklinde kütüphaneyi eklemeniz gerekir.

Sonrasında projenizi derlerken aşağıdaki şekilde derlemeniz gerekir:

```bash
cc kaynak_dosyanız.c -L. -lft
```


### Gereksinimler

Libft kütüphanesini derlemek için güncel bir arşiv aracı, C derleyicisi ve make gerekmektedir.


