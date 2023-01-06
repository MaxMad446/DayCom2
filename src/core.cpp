// Auto-generated module | 2026-05-11T21:33:58.788574
#include <iostream>
#include <vector>

int compute_193() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
