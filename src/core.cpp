// Auto-generated module | 2026-05-12T03:44:37.246678
#include <iostream>
#include <vector>

int compute_851() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
