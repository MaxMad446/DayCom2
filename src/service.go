package main

// Auto-generated | 2026-05-11T19:28:38.267313
import "fmt"

func Process_764() int {
    base := 222
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
