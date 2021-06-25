// Auto-generated module | 2026-05-11T20:20:18.167148
#include <iostream>
#include <vector>

int compute_688() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
