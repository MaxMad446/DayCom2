// Auto-generated module | 2026-05-11T19:34:29.636612
#include <iostream>
#include <vector>

int compute_218() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
