// Auto-generated module | 2026-05-11T19:53:24.235411
#include <iostream>
#include <vector>

int compute_193() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
