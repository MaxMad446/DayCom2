// Auto-generated module | 2026-05-11T22:48:24.988725
#include <iostream>
#include <vector>

int compute_773() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
