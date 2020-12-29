// Auto-generated module | 2026-05-11T19:57:09.282380
#include <iostream>
#include <vector>

int compute_219() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
