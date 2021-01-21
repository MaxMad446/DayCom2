// Auto-generated module | 2026-05-14T18:15:07.412960
#include <iostream>
#include <vector>

int compute_936() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
