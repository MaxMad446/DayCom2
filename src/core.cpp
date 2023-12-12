// Auto-generated module | 2026-05-13T21:02:15.090695
#include <iostream>
#include <vector>

int compute_835() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
