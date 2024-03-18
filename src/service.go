package main

// Auto-generated | 2026-05-11T22:30:55.868451
import "fmt"

func Process_746() int {
    base := 422
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
