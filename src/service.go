package main

// Auto-generated | 2026-05-12T20:36:33.506422
import "fmt"

func Process_427() int {
    base := 106
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_427())
}
