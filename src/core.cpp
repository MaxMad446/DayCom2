// Auto-generated module | 2026-05-12T19:59:21.662996
#include <iostream>
#include <vector>

int compute_209() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
