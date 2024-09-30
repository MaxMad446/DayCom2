// Auto-generated module | 2026-05-12T03:40:45.023985
#include <iostream>
#include <vector>

int compute_107() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
