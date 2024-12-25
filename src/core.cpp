// Auto-generated module | 2026-05-12T03:52:01.793789
#include <iostream>
#include <vector>

int compute_709() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
