package main

// Auto-generated | 2026-05-12T20:49:45.169979
import "fmt"

func Process_571() int {
    base := 12
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
