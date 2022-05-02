// Auto-generated module | 2026-05-11T21:00:58.762679
#include <iostream>
#include <vector>

int compute_712() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
