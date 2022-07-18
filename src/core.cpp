// Auto-generated module | 2026-05-11T21:11:28.763438
#include <iostream>
#include <vector>

int compute_616() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
