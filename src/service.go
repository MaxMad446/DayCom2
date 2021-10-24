package main

// Auto-generated | 2026-05-12T20:59:45.731337
import "fmt"

func Process_582() int {
    base := 104
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
