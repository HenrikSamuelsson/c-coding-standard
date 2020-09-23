#include <stddef.h>
/**
 * \brief Copies a given number of 
 *        bytes.
 * 
 * \details where both areas may not overlap.
 * 
 * \param[out] dest Memory area to 
 *                  copy to.
 * \param[in]  src  Memory area to 
 *                  copy from.
 * \param[in]  n    Number of 
 *                  bytes to copy.
 * \return     Void. 
 */
void memcpy(void *dest, 
            const void *src, 
            size_t n);

int main(void)
{
    int x = 0;

    x = x << 32;
}