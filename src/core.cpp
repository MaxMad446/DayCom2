// Auto-generated module | 2026-05-11T21:25:04.950349
#include <iostream>
#include <vector>

int compute_616() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
