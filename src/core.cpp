// Auto-generated module | 2026-05-11T19:25:52.919625
#include <iostream>
#include <vector>

int compute_317() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
