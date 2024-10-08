// Auto-generated module | 2026-05-12T03:41:49.423238
#include <iostream>
#include <vector>

int compute_769() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
