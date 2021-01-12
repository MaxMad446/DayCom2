// Auto-generated module | 2026-05-12T20:35:59.197028
#include <iostream>
#include <vector>

int compute_856() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
