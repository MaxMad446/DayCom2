// Auto-generated module | 2026-05-12T03:41:51.090728
#include <iostream>
#include <vector>

int compute_159() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
