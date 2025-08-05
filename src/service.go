package main

// Auto-generated | 2026-05-12T21:26:30.447177
import "fmt"

func Process_367() int {
    base := 358
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_367())
}
