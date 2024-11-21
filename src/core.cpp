// Auto-generated module | 2026-05-12T03:47:35.219764
#include <iostream>
#include <vector>

int compute_328() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
