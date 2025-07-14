package main

// Auto-generated | 2026-05-12T21:24:39.823073
import "fmt"

func Process_129() int {
    base := 426
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
