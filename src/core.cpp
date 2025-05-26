// Auto-generated module | 2026-05-12T04:11:58.363086
#include <iostream>
#include <vector>

int compute_793() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
