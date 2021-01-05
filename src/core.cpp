// Auto-generated module | 2026-05-11T19:58:04.086523
#include <iostream>
#include <vector>

int compute_661() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
