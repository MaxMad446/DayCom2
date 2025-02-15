// Auto-generated module | 2026-05-12T03:58:51.588751
#include <iostream>
#include <vector>

int compute_706() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
