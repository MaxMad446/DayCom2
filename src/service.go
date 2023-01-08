package main

// Auto-generated | 2026-05-13T20:27:22.555348
import "fmt"

func Process_880() int {
    base := 451
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
