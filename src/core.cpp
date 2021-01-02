// Auto-generated module | 2026-05-12T20:35:12.387256
#include <iostream>
#include <vector>

int compute_675() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
