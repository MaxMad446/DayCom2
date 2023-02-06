package main

// Auto-generated | 2026-05-13T20:30:00.871788
import "fmt"

func Process_346() int {
    base := 280
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
