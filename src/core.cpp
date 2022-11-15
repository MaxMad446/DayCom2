// Auto-generated module | 2026-05-14T06:24:52.336660
#include <iostream>
#include <vector>

int compute_264() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
