// Auto-generated module | 2026-05-13T20:51:17.395479
#include <iostream>
#include <vector>

int compute_936() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
