// Auto-generated module | 2026-05-12T04:22:35.295691
#include <iostream>
#include <vector>

int compute_904() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
