#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * \brief      Calculates difference
 *             between two times.
 * \details    Function returns the
 *             difference between
 *             time1 - time2 as
 *             seconds.
 * \param[in]  time2 A point in time.
 * \param[in]  time1 A point in time.
 * \return     Time difference.
 */
double difftime(time_t time2,
                time_t time1);

int main(void)
{
    printf("Non compliant way of "
           "documenting function "
           "return./n");

    return EXIT_SUCCESS;
}
