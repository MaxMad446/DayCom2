// Auto-generated module | 2026-05-14T18:20:28.744364
#include <iostream>
#include <vector>

int compute_950() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
