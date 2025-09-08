// Auto-generated module | 2026-05-12T04:25:54.303911
#include <iostream>
#include <vector>

int compute_550() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
