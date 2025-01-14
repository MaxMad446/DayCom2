// Auto-generated module | 2026-05-12T03:54:46.738058
#include <iostream>
#include <vector>

int compute_134() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
