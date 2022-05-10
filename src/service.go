package main

// Auto-generated | 2026-05-13T22:11:31.079787
import "fmt"

func Process_513() int {
    base := 265
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
