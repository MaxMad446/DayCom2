// Auto-generated module | 2026-05-12T21:37:18.728868
#include <iostream>
#include <vector>

int compute_482() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
