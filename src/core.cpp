// Auto-generated module | 2026-05-12T04:21:09.981207
#include <iostream>
#include <vector>

int compute_324() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
