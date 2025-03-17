// Auto-generated module | 2026-05-12T04:02:49.612574
#include <iostream>
#include <vector>

int compute_232() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
