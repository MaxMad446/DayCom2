// Auto-generated module | 2026-05-11T20:49:40.647867
#include <iostream>
#include <vector>

int compute_320() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
