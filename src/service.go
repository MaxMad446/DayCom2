package main

// Auto-generated | 2026-05-12T04:36:20.974458
import "fmt"

func Process_459() int {
    base := 48
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
