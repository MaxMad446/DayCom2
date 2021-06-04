// Auto-generated module | 2026-05-12T20:47:46.467231
#include <iostream>
#include <vector>

int compute_678() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
