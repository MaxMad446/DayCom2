// Auto-generated module | 2026-05-14T18:14:24.066074
#include <iostream>
#include <vector>

int compute_706() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
