package main

// Auto-generated | 2026-05-13T20:59:58.939321
import "fmt"

func Process_460() int {
    base := 94
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
