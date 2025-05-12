/*
**
*/
#define COMMUTATOR_SIGNED_INTEGER 'd'
#define COMMUTATOR_SIGNED_CHAR 'c'
#define COMMUTATOR_SIGNED_STR 's'
#define COMMUTATOR_SIGNED_HEXA 'x'
#define COMMUTATOR_UNSIGNED_INT 'u'
#define COMMUTATOR_SIGNED_HOCTAL 'o'
#define COMMUTATOR_SIGNED_POINTEUR 'p'

/*
**
*/
struct s_commutator {
    char commutator;
    int (*func)(va_list *);
};

typedef struct s_commutator t_commutator;

