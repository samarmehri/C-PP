/ Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful
template<typename test>
void swap(test& a, test& b) {
    test tmp = a;
    a = b;
    b = tmp;
}

template<typename test>
void my_selection_sort( test begin, test end)
{
    test min,next;
    test i = begin;
    while(i != end)
    {
        min = i;
        next = i;
        for (test res = ++next; res != end; ++res)
        {
            if (*res < *min)
                min = res;
        }
        swap(*min, *i);
        i++;
    }
}
