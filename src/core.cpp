// Auto-generated module | 2026-05-12T04:12:44.735623
#include <iostream>
#include <vector>

int compute_117() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
