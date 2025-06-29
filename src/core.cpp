// Auto-generated module | 2026-05-12T04:16:18.581157
#include <iostream>
#include <vector>

int compute_674() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
