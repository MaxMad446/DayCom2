package main

// Auto-generated | 2026-05-12T21:25:45.436705
import "fmt"

func Process_785() int {
    base := 411
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
