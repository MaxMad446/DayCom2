// Auto-generated module | 2026-05-11T21:29:35.359734
#include <iostream>
#include <vector>

int compute_403() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
