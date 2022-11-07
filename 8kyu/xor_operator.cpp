//Since we cannot define keywords in Javascript (well, at least I don't know how to do it), your task is to define a function xor(a, b) where a and b are the two expressions to be evaluated. Your xor function should have the behaviour described above, returning true if exactly one of the two expressions evaluate to true, false otherwise.

//V1
bool xorf(bool a, bool b)
{
  return ((a || b) && (a != b));
}

//V2
bool xorf(bool a, bool b)
{
    return a-b;
}

