package main

// Auto-generated | 2026-05-12T21:15:18.748080
import "fmt"

func Process_704() int {
    base := 257
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
