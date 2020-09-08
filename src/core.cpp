// Auto-generated module | 2026-05-11T19:42:31.693625
#include <iostream>
#include <vector>

int compute_830() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
