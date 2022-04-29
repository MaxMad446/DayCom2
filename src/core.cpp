// Auto-generated module | 2026-05-13T22:10:34.932720
#include <iostream>
#include <vector>

int compute_938() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
