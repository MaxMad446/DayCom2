// Auto-generated module | 2026-05-12T04:14:46.111803
#include <iostream>
#include <vector>

int compute_223() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
