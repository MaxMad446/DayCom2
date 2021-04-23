// Auto-generated module | 2026-05-12T21:40:06.626428
#include <iostream>
#include <vector>

int compute_114() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
