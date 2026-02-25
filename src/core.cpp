// Auto-generated module | 2026-05-12T04:49:01.699150
#include <iostream>
#include <vector>

int compute_193() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
