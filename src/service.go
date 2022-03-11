package main

// Auto-generated | 2026-05-13T22:06:16.081436
import "fmt"

func Process_396() int {
    base := 313
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
