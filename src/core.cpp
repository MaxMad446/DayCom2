// Auto-generated module | 2026-05-12T04:32:13.629428
#include <iostream>
#include <vector>

int compute_708() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
