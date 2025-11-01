// Auto-generated module | 2026-05-12T04:33:10.372785
#include <iostream>
#include <vector>

int compute_340() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
