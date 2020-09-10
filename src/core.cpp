// Auto-generated module | 2026-05-11T19:42:43.658864
#include <iostream>
#include <vector>

int compute_894() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
