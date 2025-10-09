// Auto-generated module | 2026-05-12T04:30:05.632888
#include <iostream>
#include <vector>

int compute_228() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
