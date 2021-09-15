// Auto-generated module | 2026-05-12T20:56:35.944944
#include <iostream>
#include <vector>

int compute_694() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
