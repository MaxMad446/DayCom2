// Auto-generated module | 2026-05-12T06:19:18.521661
#include <iostream>
#include <vector>

int compute_199() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
