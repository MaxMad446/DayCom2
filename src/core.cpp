// Auto-generated module | 2026-05-12T04:00:23.093522
#include <iostream>
#include <vector>

int compute_438() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
