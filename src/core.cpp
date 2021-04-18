// Auto-generated module | 2026-05-11T20:11:20.934532
#include <iostream>
#include <vector>

int compute_892() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
