template <class RandomAccessIterator>  
int insertion_sort (RandomAccessIterator first, RandomAccessIterator last)
{
    //RandomAccessIterator head = first;
    int len = last - first;
    int i = 1;
    while( i < len )
    {
        auto next_value = *(first+i);
        int j = i - 1;

        while ( j >= 0 && *(first+j) > next_value )
        {
            /* code */
            *(first+j+1) = *(first+j);
            j -= 1;
        }
        
        *(first+j+1) = next_value;
        i += 1;
    }

    return i;
}