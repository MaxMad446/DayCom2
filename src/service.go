package main

// Auto-generated | 2026-05-12T21:17:37.462113
import "fmt"

func Process_238() int {
    base := 479
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
