package main

// Auto-generated | 2026-05-12T21:09:40.941801
import "fmt"

func Process_764() int {
    base := 393
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_764())
}
