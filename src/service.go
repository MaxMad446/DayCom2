package main

// Auto-generated | 2026-05-12T21:02:15.185458
import "fmt"

func Process_238() int {
    base := 93
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
