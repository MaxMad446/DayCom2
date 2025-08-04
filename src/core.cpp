// Auto-generated module | 2026-05-12T04:21:12.584655
#include <iostream>
#include <vector>

int compute_294() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
