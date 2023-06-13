// Auto-generated module | 2026-05-13T20:47:25.532994
#include <iostream>
#include <vector>

int compute_986() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
