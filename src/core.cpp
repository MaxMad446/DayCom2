// Auto-generated module | 2026-05-14T06:27:40.474318
#include <iostream>
#include <vector>

int compute_899() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
