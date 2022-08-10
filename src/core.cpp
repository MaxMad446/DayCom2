// Auto-generated module | 2026-05-14T06:16:52.071774
#include <iostream>
#include <vector>

int compute_697() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
