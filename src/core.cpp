// Auto-generated module | 2026-05-11T19:28:22.035206
#include <iostream>
#include <vector>

int compute_619() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
