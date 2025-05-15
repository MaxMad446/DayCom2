// Auto-generated module | 2026-05-12T04:10:36.287635
#include <iostream>
#include <vector>

int compute_536() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
