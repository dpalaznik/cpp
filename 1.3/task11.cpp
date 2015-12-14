#include <iostream>
using namespace std;

/**
 * Разность времен
 * Даны значения двух моментов времени, принадлежащих одним и тем же суткам:
 * часы, минуты и секунды для каждого из моментов времени.
 * Известно, что второй момент времени наступил не раньше первого.
 * Определите, сколько секунд прошло между двумя моментами времени.
 * Формат входных данных
 * Программа на вход получает три целых числа: часы, минуты, секунды,
 * задающие первый момент времени и три целых числа, задающих второй момент времени.
 * Формат выходных данных
 * Выведите число секунд между этими моментами времени.
 * 1 1 1 2 2 2 -> 3661
 * 1 2 30 1 3 20 -> 50
 */
int main() {
    int h1, m1, s1, t1, h2, m2, s2, t2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    cout << t2 - t1;
    return 0;
}
