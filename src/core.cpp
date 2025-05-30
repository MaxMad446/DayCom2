// Auto-generated module | 2026-05-12T21:20:35.794567
#include <iostream>
#include <vector>

int compute_675() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
