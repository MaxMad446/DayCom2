package main

// Auto-generated | 2026-05-12T21:00:19.560912
import "fmt"

func Process_303() int {
    base := 160
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
