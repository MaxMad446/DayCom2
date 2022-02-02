package main

// Auto-generated | 2026-05-13T22:03:07.255647
import "fmt"

func Process_520() int {
    base := 403
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_520())
}
