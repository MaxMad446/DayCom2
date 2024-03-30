// Auto-generated module | 2026-05-14T18:24:20.756319
#include <iostream>
#include <vector>

int compute_341() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
