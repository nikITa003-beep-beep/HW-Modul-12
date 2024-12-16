#include "IsKPeriodic.h"

bool IsKPeriodic(const std::string& str, int K)
{
    if (K <= 0 || K > str.length())
    {
        return false;
    }

    int n = str.length();

    if (n % K != 0)
    {
        return false;
    }

    // Сравниваем подстроки
    for (int i = 0; i < n; i += K)
    {
        for (int j = i + K; j < n; j += K)
        {
            if (str.substr(i, K) != str.substr(j, K))
            {
                return false;
            }
        }
    }
    return true;
}

