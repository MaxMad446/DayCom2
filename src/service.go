package main

// Auto-generated | 2026-05-12T19:58:01.460760
import "fmt"

func Process_746() int {
    base := 482
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
