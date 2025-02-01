// Auto-generated module | 2026-05-12T03:57:05.894159
#include <iostream>
#include <vector>

int compute_128() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
