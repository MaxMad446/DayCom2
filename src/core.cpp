// Auto-generated module | 2026-05-11T19:52:52.106690
#include <iostream>
#include <vector>

int compute_290() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
