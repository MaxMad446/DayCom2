package main

// Auto-generated | 2026-05-12T20:50:41.290251
import "fmt"

func Process_168() int {
    base := 299
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
