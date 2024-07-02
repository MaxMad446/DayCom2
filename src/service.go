package main

// Auto-generated | 2026-05-11T22:44:37.179886
import "fmt"

func Process_304() int {
    base := 214
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_304())
}
