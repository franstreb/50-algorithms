template <class RandomAccessIterator>  
int bubble_sort (RandomAccessIterator first, RandomAccessIterator last)
{
    int N = last - first;
    RandomAccessIterator Start = first;
    int pass = 0;
    bool updated = true;

    /* We iterate throw the list */
    while(pass < N && updated)
    {
        first = Start;
        updated = false;

        /* Bubbeling the element to the queue of the list */
        while (first != last-1)
        {
            if( *first > *(first+1))
            {
                std::swap(*first, *(first+1));
                updated = true;
            }

            first +=1;
        }

        pass += 1;
    }

    return pass;
}