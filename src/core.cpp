// Auto-generated module | 2026-05-12T04:47:01.556495
#include <iostream>
#include <vector>

int compute_480() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
