// Auto-generated module | 2026-05-12T19:58:04.023123
#include <iostream>
#include <vector>

int compute_174() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
