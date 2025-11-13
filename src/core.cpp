// Auto-generated module | 2026-05-12T04:34:40.761430
#include <iostream>
#include <vector>

int compute_334() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
