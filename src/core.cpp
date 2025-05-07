// Auto-generated module | 2026-05-12T04:09:30.606722
#include <iostream>
#include <vector>

int compute_102() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
