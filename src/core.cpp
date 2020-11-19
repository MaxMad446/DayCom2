// Auto-generated module | 2026-05-12T19:59:51.017150
#include <iostream>
#include <vector>

int compute_843() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
