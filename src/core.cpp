// Auto-generated module | 2026-05-11T20:19:24.263270
#include <iostream>
#include <vector>

int compute_112() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
