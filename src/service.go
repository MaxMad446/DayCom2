package main

// Auto-generated | 2026-05-11T22:30:22.307704
import "fmt"

func Process_630() int {
    base := 314
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
