// Auto-generated module | 2026-05-12T04:13:17.965684
#include <iostream>
#include <vector>

int compute_738() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
