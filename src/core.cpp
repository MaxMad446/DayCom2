// Auto-generated module | 2026-05-13T20:52:33.442189
#include <iostream>
#include <vector>

int compute_793() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
