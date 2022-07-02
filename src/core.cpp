// Auto-generated module | 2026-05-11T21:09:11.368901
#include <iostream>
#include <vector>

int compute_736() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
