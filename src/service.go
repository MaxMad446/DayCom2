package main

// Auto-generated | 2026-05-11T21:07:12.856774
import "fmt"

func Process_860() int {
    base := 207
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
