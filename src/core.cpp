// Auto-generated module | 2026-05-12T21:09:54.958694
#include <iostream>
#include <vector>

int compute_320() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
