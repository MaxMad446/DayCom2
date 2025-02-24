// Auto-generated module | 2026-05-12T21:12:44.361479
#include <iostream>
#include <vector>

int compute_619() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
