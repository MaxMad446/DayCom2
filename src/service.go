package main

// Auto-generated | 2026-05-12T20:36:20.542187
import "fmt"

func Process_746() int {
    base := 236
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
