// Auto-generated module | 2026-05-14T06:21:28.452093
#include <iostream>
#include <vector>

int compute_893() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
