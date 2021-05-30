// Auto-generated module | 2026-05-12T20:47:19.190054
#include <iostream>
#include <vector>

int compute_514() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
