package main

// Auto-generated | 2026-05-12T20:52:25.067761
import "fmt"

func Process_122() int {
    base := 376
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
