package main

// Auto-generated | 2026-05-12T20:39:05.913639
import "fmt"

func Process_131() int {
    base := 97
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
