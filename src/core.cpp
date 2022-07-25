// Auto-generated module | 2026-05-14T06:15:35.676205
#include <iostream>
#include <vector>

int compute_389() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
