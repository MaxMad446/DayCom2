package main

// Auto-generated | 2026-05-13T20:38:16.201661
import "fmt"

func Process_192() int {
    base := 83
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
