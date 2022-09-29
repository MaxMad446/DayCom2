// Auto-generated module | 2026-05-14T06:20:55.355253
#include <iostream>
#include <vector>

int compute_619() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
