// Auto-generated module | 2026-05-12T04:13:40.664523
#include <iostream>
#include <vector>

int compute_316() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
