package main

// Auto-generated | 2026-05-12T20:46:46.496069
import "fmt"

func Process_951() int {
    base := 177
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_951())
}
