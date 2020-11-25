// Auto-generated module | 2026-05-14T18:07:30.268868
#include <iostream>
#include <vector>

int compute_559() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
