// Auto-generated module | 2026-05-12T21:39:42.743107
#include <iostream>
#include <vector>

int compute_864() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
