// Auto-generated module | 2026-05-13T22:09:58.315840
#include <iostream>
#include <vector>

int compute_346() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
