// Auto-generated module | 2026-05-14T06:23:35.986644
#include <iostream>
#include <vector>

int compute_568() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
