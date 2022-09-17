// Auto-generated module | 2026-05-11T21:19:20.843070
#include <iostream>
#include <vector>

int compute_338() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
