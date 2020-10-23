// Auto-generated module | 2026-05-12T19:57:45.190792
#include <iostream>
#include <vector>

int compute_769() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
