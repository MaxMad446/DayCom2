// Auto-generated module | 2026-05-14T18:25:33.529912
#include <iostream>
#include <vector>

int compute_225() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
