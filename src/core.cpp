// Auto-generated module | 2026-05-14T06:23:48.535635
#include <iostream>
#include <vector>

int compute_895() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
