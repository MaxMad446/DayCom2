package main

// Auto-generated | 2026-05-12T21:21:36.239577
import "fmt"

func Process_783() int {
    base := 218
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
