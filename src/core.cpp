// Auto-generated module | 2026-05-12T04:45:11.300221
#include <iostream>
#include <vector>

int compute_337() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
