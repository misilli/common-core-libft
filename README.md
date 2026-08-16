*This project has been created as part of the 42 curriculum by mumidill.*

# Libft

## Açıklama

Libft, gelecekte ihtiyaç duyacağımız fonksiyonlara sahip bir kütüphane projesidir.

Libft, üç ana bölümden oluşur:

1. Libc fonksiyonları: standart kütüphane fonksiyonlarının işleyişini inceleyerek yeniden yazılmış fonksiyonlar.
2. Ek fonksiyonlar: yazı ve sayı işleme için özel fonksiyonlar.
3. Bağlı liste fonksiyonları: t_list yapısı üzerinde pratik işlem yapmayı sağlayan fonksiyonlardır.

## Talimatlar

`make all`: libft.a dosyasını derler.

`make clean`: obje dosyalarını kaldırır.

`make fclean`: obje dosyalarını ve libft.a dosyasını kaldırır.

`make re`: sırasıyla fclean ve all fonksiyonlarının işlevlerini yerine getirir.

Kullanmak için projenize `#include "libft.h"` şeklinde kütüphaneyi eklemeniz gerekir.

### Gereksinimler

Libft kütüphanesini derlemek için güncel bir arşiv aracı, C derleyicisi ve make gerekmektedir.

## Kütüphane Detayı

Libft, aşağıdaki fonksiyon gruplarını içerir:

| Kategori | Fonksiyonlar |
| -------- | ------------ |
| Libc fonksiyonları | `ft_strlen`, `ft_memcpy`, `ft_memset`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strdup`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_calloc`, `ft_bzero` |
| Ek fonksiyonlar | `ft_split`, `ft_itoa`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Bağlı liste fonksiyonları | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

`t_list` yapısı, `libft.h` içinde şu şekilde tanımlıdır:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Her fonksiyon, `man` sayfalarındaki orijinal davranışa mümkün olduğunca sadık kalınarak, yeniden yazılmıştır.

## Kaynaklar

* Yeniden yazılmış fonksiyonların `man` sayfaları
* [C23 Taslakları](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)
* [The C Programming Language kitabı](https://www.columbia.edu/~ng2573/c89/kr2.pdf)

### Yapay Zeka Kullanımı

Yapay zeka, kütüphane dosyasının düzenlenmesinde kullanılmıştır. README.md dosyasındaki yazım ve imla hataları düzeltilmiştir. Fonksiyonların işleyişi hakkında bilgi alınmıştır.
