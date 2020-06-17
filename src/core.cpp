// Auto-generated module | 2026-05-11T19:31:32.617906
#include <iostream>
#include <vector>

int compute_192() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
