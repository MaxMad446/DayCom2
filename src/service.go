package main

// Auto-generated | 2026-05-13T20:30:34.188291
import "fmt"

func Process_401() int {
    base := 440
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
