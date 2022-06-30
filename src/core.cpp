// Auto-generated module | 2026-05-14T06:13:36.209245
#include <iostream>
#include <vector>

int compute_441() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
