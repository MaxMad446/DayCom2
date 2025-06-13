// Auto-generated module | 2026-05-12T04:14:09.075216
#include <iostream>
#include <vector>

int compute_759() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
