// Auto-generated module | 2026-05-12T04:25:10.088128
#include <iostream>
#include <vector>

int compute_246() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
