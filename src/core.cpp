// Auto-generated module | 2026-05-14T06:11:45.231605
#include <iostream>
#include <vector>

int compute_967() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
