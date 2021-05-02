// Auto-generated module | 2026-05-12T21:40:51.627685
#include <iostream>
#include <vector>

int compute_593() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
