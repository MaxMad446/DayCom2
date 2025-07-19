// Auto-generated module | 2026-05-12T04:19:09.468833
#include <iostream>
#include <vector>

int compute_935() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
