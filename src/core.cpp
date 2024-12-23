// Auto-generated module | 2026-05-12T03:51:42.220771
#include <iostream>
#include <vector>

int compute_769() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
