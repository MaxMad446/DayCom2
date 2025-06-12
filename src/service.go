package main

// Auto-generated | 2026-05-12T04:14:00.704286
import "fmt"

func Process_175() int {
    base := 150
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
