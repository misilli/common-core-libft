#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int             content;
    struct s_list   *next;
}                   t_list;

/* TEK YILDIZ: sadece kopya üzerinde çalışır, head'i DEĞİŞTİREMEZ */
void    try_change_head_single(t_list *lst, t_list *new_node)
{
    lst = new_node;   /* sadece lokal kopya yön değiştirir, dışarısı etkilenmez */
}

/* CIFT YILDIZ: gerçek head'e ulaşır, head'i DEĞİŞTİREBİLİR */
void    try_change_head_double(t_list **lst, t_list *new_node)
{
    *lst = new_node;   /* dışarıdaki head değişkeninin içeriğini değiştiriyoruz */
}

/* Listenin başına yeni eleman ekler -> head'i değiştirmesi GEREKTIĞI için ** şart */
void    add_front(t_list **head, int value)
{
    t_list *new_node;

    new_node = malloc(sizeof(t_list));
    new_node->content = value;
    new_node->next = *head;
    *head = new_node;
}

/* Sadece okuma yapıyor, hiçbir şeyi değiştirmiyor -> tek yıldız yeterli */
void    print_list(t_list *lst)
{
    printf("Liste: ");
    while (lst)
    {
        printf("%d -> ", lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *head;
    t_list *node2;
    t_list *node3;
    t_list *node4;
    t_list *extra_node;

    /* zincir kur: 10 -> 20 -> 30 -> 40 -> NULL */
    head = malloc(sizeof(t_list));
    head->content = 10;

    node2 = malloc(sizeof(t_list));
    node2->content = 20;
    head->next = node2;

    node3 = malloc(sizeof(t_list));
    node3->content = 30;
    node2->next = node3;

    node4 = malloc(sizeof(t_list));
    node4->content = 40;
    node3->next = node4;
    node4->next = NULL;

    printf("--- Baslangic ---\n");
    print_list(head);

    /* Deneme 1: tek yildizla head'i degistirmeye calis */
    extra_node = malloc(sizeof(t_list));
    extra_node->content = 999;
    extra_node->next = NULL;

    try_change_head_single(head, extra_node);
    printf("\n--- try_change_head_single sonrasi (degismedi!) ---\n");
    print_list(head);

    /* Deneme 2: cift yildizla head'i gercekten degistir */
    try_change_head_double(&head, extra_node);
    printf("\n--- try_change_head_double sonrasi (degisti!) ---\n");
    print_list(head);

    /* Deneme 3: gercek kullanim - basa eleman ekleme (** sart) */
    add_front(&head, 555);
    printf("\n--- add_front sonrasi (basina 555 eklendi) ---\n");
    print_list(head);

    return (0);
}