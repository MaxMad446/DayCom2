// Auto-generated module | 2026-05-11T19:31:07.025960
#include <iostream>
#include <vector>

int compute_386() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
