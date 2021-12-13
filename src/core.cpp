// Auto-generated module | 2026-05-11T20:42:52.983028
#include <iostream>
#include <vector>

int compute_328() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
