// Auto-generated module | 2026-05-14T18:05:06.521870
#include <iostream>
#include <vector>

int compute_795() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
