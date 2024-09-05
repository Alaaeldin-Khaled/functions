bool starts_with(string input, string pattern, int pos)
{
    // "aabaa", "aa"
    //     ^
    if (pos + pattern.size() > input.size())
        return false;

    for (int i = 0; pos < input.size() && i < pattern.size(); ++i, ++pos)
    {
        if (pattern[i] != input[pos])
            return false;
    }

    return true;
}


string replace_str(string input, string pattern, string to)
{
    string result = "";

    for (int i = 0; i < input.size(); ++i)
    {
        if (starts_with(input, pattern, i))
        {
            for (int j = 0; j < to.size(); ++j)
            {
                result += to[j];
            }
            i += pattern.size() - 1;
        }
        else
        {
            result += input[i];
        }
    }

    return result;
}

