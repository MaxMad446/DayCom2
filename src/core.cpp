// Auto-generated module | 2026-05-12T20:59:36.021317
#include <iostream>
#include <vector>

int compute_148() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
