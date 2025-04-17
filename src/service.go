package main

// Auto-generated | 2026-05-12T04:06:52.779763
import "fmt"

func Process_384() int {
    base := 224
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
