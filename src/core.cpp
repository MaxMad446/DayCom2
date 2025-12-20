// Auto-generated module | 2026-05-12T04:39:43.045047
#include <iostream>
#include <vector>

int compute_924() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
