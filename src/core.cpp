// Auto-generated module | 2026-05-12T20:59:58.339606
#include <iostream>
#include <vector>

int compute_899() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
