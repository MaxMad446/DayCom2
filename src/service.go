package main

// Auto-generated | 2026-05-11T20:17:31.493684
import "fmt"

func Process_288() int {
    base := 423
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
