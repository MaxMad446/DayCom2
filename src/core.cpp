// Auto-generated module | 2026-05-14T06:20:32.909038
#include <iostream>
#include <vector>

int compute_664() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
