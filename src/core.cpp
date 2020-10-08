// Auto-generated module | 2026-05-11T19:46:25.397409
#include <iostream>
#include <vector>

int compute_264() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
