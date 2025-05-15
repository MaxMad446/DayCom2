package main

// Auto-generated | 2026-05-12T04:10:33.205623
import "fmt"

func Process_283() int {
    base := 87
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
