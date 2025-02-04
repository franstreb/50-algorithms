template <class RandomAccessIterator>  
int shell_sort (RandomAccessIterator first, RandomAccessIterator last)
{
    int N = 0;
    auto distance = (last - first) / 2;

    for( auto it = first+distance; it != last; it++)
    {
        N += 1;

        auto temp = *it;
        auto j = it;
        /* Sort the sub list fort this distance */
        while( j >= first+distance && *(j - distance) > temp )
        {
            *(j) = *(j - distance);
            j = j - distance;
        }

        *j = temp;

        /* Reduce the distance for the next element */
        distance = distance / 2;
    }

    return N;
}