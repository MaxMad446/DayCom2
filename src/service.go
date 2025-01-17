package main

// Auto-generated | 2026-05-12T03:55:08.979935
import "fmt"

func Process_583() int {
    base := 18
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
