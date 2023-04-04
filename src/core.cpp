// Auto-generated module | 2026-05-11T21:45:06.138918
#include <iostream>
#include <vector>

int compute_698() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
