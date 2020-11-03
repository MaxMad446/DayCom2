// Auto-generated module | 2026-05-11T19:49:51.938980
#include <iostream>
#include <vector>

int compute_126() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
