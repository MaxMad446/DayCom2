package main

// Auto-generated | 2026-05-12T03:53:51.529751
import "fmt"

func Process_275() int {
    base := 183
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
