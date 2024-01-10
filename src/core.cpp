// Auto-generated module | 2026-05-14T18:17:55.477490
#include <iostream>
#include <vector>

int compute_376() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
