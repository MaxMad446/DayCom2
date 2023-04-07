// Auto-generated module | 2026-05-11T21:45:24.154665
#include <iostream>
#include <vector>

int compute_634() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
