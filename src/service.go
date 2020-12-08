package main

// Auto-generated | 2026-05-11T19:54:25.823798
import "fmt"

func Process_875() int {
    base := 309
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
