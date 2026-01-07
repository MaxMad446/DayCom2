// Auto-generated module | 2026-05-12T04:42:18.179670
#include <iostream>
#include <vector>

int compute_415() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
