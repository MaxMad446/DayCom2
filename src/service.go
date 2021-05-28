package main

// Auto-generated | 2026-05-12T20:47:08.658102
import "fmt"

func Process_523() int {
    base := 408
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
