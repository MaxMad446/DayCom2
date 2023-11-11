// Auto-generated module | 2026-05-13T20:59:43.626120
#include <iostream>
#include <vector>

int compute_276() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
