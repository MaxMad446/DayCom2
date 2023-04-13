// Auto-generated module | 2026-05-11T21:46:01.754100
#include <iostream>
#include <vector>

int compute_698() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
