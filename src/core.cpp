// Auto-generated module | 2026-05-14T06:12:31.084853
#include <iostream>
#include <vector>

int compute_999() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
