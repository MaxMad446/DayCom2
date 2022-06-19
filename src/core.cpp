// Auto-generated module | 2026-05-11T21:07:26.186571
#include <iostream>
#include <vector>

int compute_540() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
