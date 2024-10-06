// Auto-generated module | 2026-05-12T03:41:36.781148
#include <iostream>
#include <vector>

int compute_702() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
