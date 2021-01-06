// Auto-generated module | 2026-05-12T21:31:15.661223
#include <iostream>
#include <vector>

int compute_712() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
