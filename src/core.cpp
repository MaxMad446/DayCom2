// Auto-generated module | 2026-05-14T06:24:18.941186
#include <iostream>
#include <vector>

int compute_544() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
