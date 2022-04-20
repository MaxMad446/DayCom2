// Auto-generated module | 2026-05-13T22:09:45.777695
#include <iostream>
#include <vector>

int compute_656() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
