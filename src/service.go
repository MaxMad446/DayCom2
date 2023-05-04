package main

// Auto-generated | 2026-05-11T21:48:56.907943
import "fmt"

func Process_154() int {
    base := 253
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_154())
}
