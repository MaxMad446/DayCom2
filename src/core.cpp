// Auto-generated module | 2026-05-12T04:18:39.825831
#include <iostream>
#include <vector>

int compute_706() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
