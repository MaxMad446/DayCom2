// Auto-generated module | 2026-05-11T21:40:19.106043
#include <iostream>
#include <vector>

int compute_233() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
