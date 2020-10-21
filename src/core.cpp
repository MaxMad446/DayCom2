// Auto-generated module | 2026-05-11T19:48:02.845643
#include <iostream>
#include <vector>

int compute_317() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
