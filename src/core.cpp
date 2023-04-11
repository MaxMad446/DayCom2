// Auto-generated module | 2026-05-11T21:45:49.236238
#include <iostream>
#include <vector>

int compute_515() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
