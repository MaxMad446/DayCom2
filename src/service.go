package main

// Auto-generated | 2026-05-12T21:17:49.257515
import "fmt"

func Process_769() int {
    base := 266
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
