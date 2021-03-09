// Auto-generated module | 2026-05-12T21:36:10.977225
#include <iostream>
#include <vector>

int compute_627() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
