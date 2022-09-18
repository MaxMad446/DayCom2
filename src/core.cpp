// Auto-generated module | 2026-05-14T06:20:02.597262
#include <iostream>
#include <vector>

int compute_404() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
