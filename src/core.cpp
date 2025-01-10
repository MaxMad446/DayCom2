// Auto-generated module | 2026-05-12T03:54:14.227596
#include <iostream>
#include <vector>

int compute_108() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
