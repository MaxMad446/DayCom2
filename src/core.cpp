// Auto-generated module | 2026-05-12T21:10:35.977053
#include <iostream>
#include <vector>

int compute_349() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
