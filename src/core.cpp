// Auto-generated module | 2026-05-12T03:40:28.225786
#include <iostream>
#include <vector>

int compute_235() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
