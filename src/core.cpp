// Auto-generated module | 2026-05-11T19:34:49.544978
#include <iostream>
#include <vector>

int compute_305() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
