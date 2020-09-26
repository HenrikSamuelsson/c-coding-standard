#include <stddef.h>
/**
 * \brief      Copies RAM data.
 *
 * \details    Copies a given number
 *             af bytes from a source
 *             memory area to a
 *             destination memory
 *             area, where areas may
 *             not overlap.
 *
 * \param[out] dest Destination area.
 * \param[in]  src  Source area.
 * \param[in]  n    Number of bytes.
 *
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