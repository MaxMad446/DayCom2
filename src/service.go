package main

// Auto-generated | 2026-05-13T21:03:39.290517
import "fmt"

func Process_275() int {
    base := 455
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
