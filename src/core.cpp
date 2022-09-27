// Auto-generated module | 2026-05-14T06:20:49.154658
#include <iostream>
#include <vector>

int compute_747() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
