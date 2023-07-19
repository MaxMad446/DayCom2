// Auto-generated module | 2026-05-13T20:50:15.539668
#include <iostream>
#include <vector>

int compute_820() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
