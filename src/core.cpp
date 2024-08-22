// Auto-generated module | 2026-05-11T22:51:13.034351
#include <iostream>
#include <vector>

int compute_619() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
