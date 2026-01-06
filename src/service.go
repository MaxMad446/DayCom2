package main

// Auto-generated | 2026-05-12T04:42:12.367925
import "fmt"

func Process_579() int {
    base := 402
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}
