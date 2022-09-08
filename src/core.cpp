// Auto-generated module | 2026-05-14T06:19:15.272104
#include <iostream>
#include <vector>

int compute_331() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
