// Auto-generated module | 2026-05-11T19:30:47.497750
#include <iostream>
#include <vector>

int compute_780() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
