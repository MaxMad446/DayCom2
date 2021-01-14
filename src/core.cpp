// Auto-generated module | 2026-05-12T20:36:11.568489
#include <iostream>
#include <vector>

int compute_729() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
