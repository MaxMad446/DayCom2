// Auto-generated module | 2026-05-12T21:16:01.445060
#include <iostream>
#include <vector>

int compute_231() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
