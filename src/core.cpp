// Auto-generated module | 2026-05-14T06:20:14.926503
#include <iostream>
#include <vector>

int compute_708() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
