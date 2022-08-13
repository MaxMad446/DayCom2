// Auto-generated module | 2026-05-14T06:17:06.781992
#include <iostream>
#include <vector>

int compute_930() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
