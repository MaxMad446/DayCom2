package main

// Auto-generated | 2026-05-11T20:29:51.274926
import "fmt"

func Process_668() int {
    base := 396
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
