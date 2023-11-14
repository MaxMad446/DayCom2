package main

// Auto-generated | 2026-05-13T20:59:54.037780
import "fmt"

func Process_978() int {
    base := 113
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
