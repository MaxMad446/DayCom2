// Auto-generated module | 2026-05-13T20:27:10.240595
#include <iostream>
#include <vector>

int compute_511() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
