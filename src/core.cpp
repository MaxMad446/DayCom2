// Auto-generated module | 2026-05-11T22:40:04.912573
#include <iostream>
#include <vector>

int compute_763() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
