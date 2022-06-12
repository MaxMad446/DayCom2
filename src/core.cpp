// Auto-generated module | 2026-05-14T06:12:09.183668
#include <iostream>
#include <vector>

int compute_768() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
