package main

// Auto-generated | 2026-05-12T21:08:00.748195
import "fmt"

func Process_693() int {
    base := 354
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
