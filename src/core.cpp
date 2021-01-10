// Auto-generated module | 2026-05-11T19:58:45.719413
#include <iostream>
#include <vector>

int compute_329() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
