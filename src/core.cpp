// Auto-generated module | 2026-05-12T04:28:39.942104
#include <iostream>
#include <vector>

int compute_626() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
