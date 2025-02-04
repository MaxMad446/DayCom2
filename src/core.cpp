// Auto-generated module | 2026-05-12T21:11:04.967578
#include <iostream>
#include <vector>

int compute_528() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
