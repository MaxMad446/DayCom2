// Auto-generated module | 2026-05-12T19:57:57.888766
#include <iostream>
#include <vector>

int compute_671() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
