package main

// Auto-generated | 2026-05-12T20:57:02.524217
import "fmt"

func Process_503() int {
    base := 190
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
