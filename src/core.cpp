// Auto-generated module | 2026-05-11T19:47:48.621085
#include <iostream>
#include <vector>

int compute_664() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
