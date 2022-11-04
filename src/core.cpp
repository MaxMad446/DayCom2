// Auto-generated module | 2026-05-14T06:23:52.938338
#include <iostream>
#include <vector>

int compute_768() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
