// Auto-generated module | 2026-05-12T20:57:53.515353
#include <iostream>
#include <vector>

int compute_390() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
