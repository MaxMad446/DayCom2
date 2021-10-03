// Auto-generated module | 2026-05-11T20:33:13.160019
#include <iostream>
#include <vector>

int compute_455() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
