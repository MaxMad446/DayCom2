package main

// Auto-generated | 2026-05-12T04:44:36.822202
import "fmt"

func Process_260() int {
    base := 96
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
