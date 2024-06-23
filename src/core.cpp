// Auto-generated module | 2026-05-11T22:43:25.905509
#include <iostream>
#include <vector>

int compute_119() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
