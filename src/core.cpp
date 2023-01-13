// Auto-generated module | 2026-05-11T21:34:50.966190
#include <iostream>
#include <vector>

int compute_853() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
