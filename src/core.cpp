// Auto-generated module | 2026-05-11T22:36:07.153074
#include <iostream>
#include <vector>

int compute_500() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
