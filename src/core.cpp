// Auto-generated module | 2026-05-12T04:49:40.223448
#include <iostream>
#include <vector>

int compute_892() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
