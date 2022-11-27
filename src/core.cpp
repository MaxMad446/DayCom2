// Auto-generated module | 2026-05-11T21:28:32.488153
#include <iostream>
#include <vector>

int compute_777() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
