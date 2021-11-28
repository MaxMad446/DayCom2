// Auto-generated module | 2026-05-12T21:02:58.248851
#include <iostream>
#include <vector>

int compute_823() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
