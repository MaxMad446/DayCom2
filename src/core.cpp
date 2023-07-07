// Auto-generated module | 2026-05-11T21:57:35.941057
#include <iostream>
#include <vector>

int compute_122() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
