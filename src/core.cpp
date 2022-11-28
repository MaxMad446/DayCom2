// Auto-generated module | 2026-05-14T06:25:59.636368
#include <iostream>
#include <vector>

int compute_555() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
