package main

// Auto-generated | 2026-05-13T20:37:24.736772
import "fmt"

func Process_508() int {
    base := 298
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
