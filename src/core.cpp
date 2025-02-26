// Auto-generated module | 2026-05-12T04:00:31.900915
#include <iostream>
#include <vector>

int compute_844() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
