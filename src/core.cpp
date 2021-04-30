// Auto-generated module | 2026-05-11T20:12:46.725557
#include <iostream>
#include <vector>

int compute_632() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
