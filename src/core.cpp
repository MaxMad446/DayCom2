// Auto-generated module | 2026-05-12T20:55:54.044778
#include <iostream>
#include <vector>

int compute_217() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
