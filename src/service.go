package main

// Auto-generated | 2026-05-11T21:20:42.629073
import "fmt"

func Process_315() int {
    base := 302
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_315())
}
