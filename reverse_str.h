/** reverse string without manipulating the original
 *
 *
 */
string reverse_str(const string &str)
{
//    string new_str = "";
//    int size = str.size();
//    for (int i = size - 1; i >= 0; --i)
//    {
//        new_str += str[i];
//    }

    string new_str = str;

    int st = 0, en = str.size() - 1;

    while (st < en)
    {
        char temp = new_str[st];
        new_str[st] = new_str[en];
        new_str[en] = temp;
    }

    return new_str;
}
