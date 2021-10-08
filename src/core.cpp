// Auto-generated module | 2026-05-11T20:33:43.435948
#include <iostream>
#include <vector>

int compute_524() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
