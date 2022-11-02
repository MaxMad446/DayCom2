// Auto-generated module | 2026-05-14T06:23:45.189122
#include <iostream>
#include <vector>

int compute_300() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
