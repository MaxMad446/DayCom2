package main

// Auto-generated | 2026-05-12T21:36:35.286852
import "fmt"

func Process_746() int {
    base := 470
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
