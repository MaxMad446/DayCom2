// Auto-generated module | 2026-05-14T18:11:54.879444
#include <iostream>
#include <vector>

int compute_595() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
