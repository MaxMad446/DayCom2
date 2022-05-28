// Auto-generated module | 2026-05-11T21:04:28.877917
#include <iostream>
#include <vector>

int compute_452() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
