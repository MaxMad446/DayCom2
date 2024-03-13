// Auto-generated module | 2026-05-14T18:23:02.307328
#include <iostream>
#include <vector>

int compute_403() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
