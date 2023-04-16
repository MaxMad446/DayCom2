// Auto-generated module | 2026-05-11T21:46:24.066454
#include <iostream>
#include <vector>

int compute_809() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
