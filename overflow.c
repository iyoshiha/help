#include <libc.h>
#include <errno.h>

int    is_umul_overflow(size_t a, size_t b)
{
    if (a > __LONG_LONG_MAX__ / b)
        return (0);
    return (1);
}

void    *ft_calloc(size_t count, size_t size)
{
    char    *dst;
    size_t    total;
    size_t    i;

    if (count == 0 || size == 0)
        return (NULL);
    if (!(is_umul_overflow(count, size)))
        return (NULL);
    total = count * size;
    dst = malloc(total);
    if (!dst)
    {
        errno = ENOMEM;
        return (NULL);
    }
    i = 0;
    while (total--)
    {
        dst[i] = 0;
        i++;
    }
    return ((void *)dst);
}

int main(void)
{
   int *ptr,*p,*ptr2,*p2;
   int i;

   /* 50個のintサイズのメモリを確保 */
   ptr = (int *)ft_calloc(50,sizeof(int));
   ptr2 = (int *)calloc(50,sizeof(int));
   if(ptr == NULL) {
      printf("メモリが確保できません\n");
		return 0;
   }
   if(ptr2 == NULL) {
      printf("メモリが確保できません\n");
      return 0;
   }
size_t sss = 1111011111111111111;
size_t kkk = 1111011111111111111;
   ptr = calloc((size_t)sss,(size_t)kkk);

//    for (i=0; i<50; i++) {
//     printf("printf(%d\n", p[i]);
//    printf("calloc %d\n", p2[i]);
//    }

	printf("errno %lu\n", kkk * sss);

   /* メモリの開放 */
   free(ptr);

   return 0;
}
