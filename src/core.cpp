// Auto-generated module | 2026-05-11T21:48:36.855313
#include <iostream>
#include <vector>

int compute_550() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
