// Auto-generated module | 2026-05-14T18:09:41.655063
#include <iostream>
#include <vector>

int compute_195() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
