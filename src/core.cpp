// Auto-generated module | 2026-05-12T19:59:17.765319
#include <iostream>
#include <vector>

int compute_157() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
