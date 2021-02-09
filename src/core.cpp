// Auto-generated module | 2026-05-12T20:38:12.539522
#include <iostream>
#include <vector>

int compute_405() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
