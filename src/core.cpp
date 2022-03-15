// Auto-generated module | 2026-05-11T20:54:44.759724
#include <iostream>
#include <vector>

int compute_780() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
