// Auto-generated module | 2026-05-14T06:26:54.065449
#include <iostream>
#include <vector>

int compute_544() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
