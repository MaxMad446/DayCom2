// Auto-generated module | 2026-05-11T21:42:45.128444
#include <iostream>
#include <vector>

int compute_259() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
