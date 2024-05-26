// Auto-generated module | 2026-05-14T18:28:49.225745
#include <iostream>
#include <vector>

int compute_112() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
