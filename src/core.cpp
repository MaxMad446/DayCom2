// Auto-generated module | 2026-05-12T20:36:19.232221
#include <iostream>
#include <vector>

int compute_529() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
