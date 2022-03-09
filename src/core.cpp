// Auto-generated module | 2026-05-13T22:06:12.198561
#include <iostream>
#include <vector>

int compute_544() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
