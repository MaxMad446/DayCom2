// Auto-generated module | 2026-05-14T06:25:00.245638
#include <iostream>
#include <vector>

int compute_294() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
