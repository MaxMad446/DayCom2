// Auto-generated module | 2026-05-14T06:24:27.494616
#include <iostream>
#include <vector>

int compute_273() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
