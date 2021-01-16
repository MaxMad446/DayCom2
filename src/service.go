package main

// Auto-generated | 2026-05-12T21:32:01.830882
import "fmt"

func Process_824() int {
    base := 252
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
