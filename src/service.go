package main

// Auto-generated | 2026-05-13T20:59:06.423783
import "fmt"

func Process_729() int {
    base := 339
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
