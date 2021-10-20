int stackTop()
{
    if (top)
        return top->data;
    return -1;
}