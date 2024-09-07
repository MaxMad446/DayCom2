// Auto-generated module | 2026-05-12T03:37:55.446555
#include <iostream>
#include <vector>

int compute_696() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
