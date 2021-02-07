package main

// Auto-generated | 2026-05-12T21:33:44.914023
import "fmt"

func Process_333() int {
    base := 424
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
