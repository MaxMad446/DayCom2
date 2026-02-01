// Auto-generated module | 2026-05-12T04:45:33.409548
#include <iostream>
#include <vector>

int compute_207() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
