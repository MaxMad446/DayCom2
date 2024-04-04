// Auto-generated module | 2026-05-14T18:24:40.570263
#include <iostream>
#include <vector>

int compute_589() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
