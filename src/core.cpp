// Auto-generated module | 2026-05-12T06:19:42.022862
#include <iostream>
#include <vector>

int compute_404() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
