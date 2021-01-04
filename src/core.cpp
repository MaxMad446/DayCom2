// Auto-generated module | 2026-05-11T19:58:00.020941
#include <iostream>
#include <vector>

int compute_564() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
