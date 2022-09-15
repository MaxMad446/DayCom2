// Auto-generated module | 2026-05-14T06:19:48.379904
#include <iostream>
#include <vector>

int compute_190() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
