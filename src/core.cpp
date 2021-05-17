// Auto-generated module | 2026-05-12T20:46:10.640390
#include <iostream>
#include <vector>

int compute_674() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
