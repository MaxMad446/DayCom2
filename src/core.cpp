// Auto-generated module | 2026-05-13T22:10:50.819750
#include <iostream>
#include <vector>

int compute_250() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
