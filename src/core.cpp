// Auto-generated module | 2026-05-12T04:40:09.916026
#include <iostream>
#include <vector>

int compute_726() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
