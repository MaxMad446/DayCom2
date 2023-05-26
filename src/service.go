package main

// Auto-generated | 2026-05-13T20:39:00.470971
import "fmt"

func Process_711() int {
    base := 276
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
