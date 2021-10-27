// Auto-generated module | 2026-05-12T21:00:00.908135
#include <iostream>
#include <vector>

int compute_813() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
