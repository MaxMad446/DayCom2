// Auto-generated module | 2026-05-12T04:09:08.641928
#include <iostream>
#include <vector>

int compute_427() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
