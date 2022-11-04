package main

// Auto-generated | 2026-05-11T21:25:32.457657
import "fmt"

func Process_528() int {
    base := 427
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_528())
}
