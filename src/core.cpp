// Auto-generated module | 2026-05-14T18:28:55.262959
#include <iostream>
#include <vector>

int compute_276() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
