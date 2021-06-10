package main

// Auto-generated | 2026-05-12T20:48:15.125657
import "fmt"

func Process_145() int {
    base := 420
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
