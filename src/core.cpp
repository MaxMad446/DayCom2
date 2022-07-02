// Auto-generated module | 2026-05-14T06:13:54.959566
#include <iostream>
#include <vector>

int compute_702() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
