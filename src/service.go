package main

// Auto-generated | 2026-05-12T04:48:26.951131
import "fmt"

func Process_392() int {
    base := 280
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
