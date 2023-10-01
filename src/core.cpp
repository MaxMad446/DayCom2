// Auto-generated module | 2026-05-11T22:08:43.925731
#include <iostream>
#include <vector>

int compute_972() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
