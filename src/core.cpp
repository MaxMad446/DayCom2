// Auto-generated module | 2026-05-11T22:44:35.495776
#include <iostream>
#include <vector>

int compute_107() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
