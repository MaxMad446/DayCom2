package main

// Auto-generated | 2026-05-12T20:51:06.543472
import "fmt"

func Process_819() int {
    base := 172
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_819())
}
