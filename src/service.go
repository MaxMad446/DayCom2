package main

// Auto-generated | 2026-05-12T21:08:17.205138
import "fmt"

func Process_133() int {
    base := 381
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_133())
}
