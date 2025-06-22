package main

// Auto-generated | 2026-05-12T04:15:25.177011
import "fmt"

func Process_729() int {
    base := 276
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
