// Auto-generated module | 2026-05-11T22:24:29.943580
#include <iostream>
#include <vector>

int compute_488() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
