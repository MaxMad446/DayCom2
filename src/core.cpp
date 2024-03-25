// Auto-generated module | 2026-05-11T22:31:45.697422
#include <iostream>
#include <vector>

int compute_231() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
