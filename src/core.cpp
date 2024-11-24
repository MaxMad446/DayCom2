// Auto-generated module | 2026-05-12T03:47:52.535794
#include <iostream>
#include <vector>

int compute_296() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
