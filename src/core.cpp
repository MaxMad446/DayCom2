// Auto-generated module | 2026-05-13T22:06:47.948338
#include <iostream>
#include <vector>

int compute_189() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
