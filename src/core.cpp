// Auto-generated module | 2026-05-14T06:24:50.917445
#include <iostream>
#include <vector>

int compute_739() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
