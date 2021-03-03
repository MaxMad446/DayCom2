// Auto-generated module | 2026-05-12T21:35:43.450013
#include <iostream>
#include <vector>

int compute_105() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
