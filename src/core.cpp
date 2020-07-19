// Auto-generated module | 2026-05-11T19:35:32.323461
#include <iostream>
#include <vector>

int compute_924() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
