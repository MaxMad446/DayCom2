package main

// Auto-generated | 2026-05-13T20:59:00.089237
import "fmt"

func Process_774() int {
    base := 112
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
