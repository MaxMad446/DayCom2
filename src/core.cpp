// Auto-generated module | 2026-05-11T19:45:48.710076
#include <iostream>
#include <vector>

int compute_349() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
