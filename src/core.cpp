// Auto-generated module | 2026-05-12T19:58:19.618891
#include <iostream>
#include <vector>

int compute_508() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
