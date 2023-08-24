// Auto-generated module | 2026-05-13T20:53:04.774024
#include <iostream>
#include <vector>

int compute_329() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
