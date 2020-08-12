// Auto-generated module | 2026-05-11T19:38:48.886789
#include <iostream>
#include <vector>

int compute_530() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
