// Auto-generated module | 2026-05-11T21:04:52.977898
#include <iostream>
#include <vector>

int compute_966() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
