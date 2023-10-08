// Auto-generated module | 2026-05-11T22:09:37.616018
#include <iostream>
#include <vector>

int compute_862() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
