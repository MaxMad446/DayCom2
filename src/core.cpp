// Auto-generated module | 2026-05-11T22:46:34.646065
#include <iostream>
#include <vector>

int compute_942() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
