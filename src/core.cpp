// Auto-generated module | 2026-05-13T22:05:23.171186
#include <iostream>
#include <vector>

int compute_792() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
