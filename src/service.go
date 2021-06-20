package main

// Auto-generated | 2026-05-12T20:49:05.069275
import "fmt"

func Process_854() int {
    base := 71
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_854())
}
