// Auto-generated module | 2026-05-12T20:52:09.515166
#include <iostream>
#include <vector>

int compute_127() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
