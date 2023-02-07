// Auto-generated module | 2026-05-13T20:30:07.397077
#include <iostream>
#include <vector>

int compute_406() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
