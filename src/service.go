package main

// Auto-generated | 2026-05-11T20:26:20.284551
import "fmt"

func Process_550() int {
    base := 405
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
