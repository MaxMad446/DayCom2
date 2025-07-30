// Auto-generated module | 2026-05-12T04:20:29.235200
#include <iostream>
#include <vector>

int compute_259() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
