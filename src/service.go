package main

// Auto-generated | 2026-05-13T21:02:16.205979
import "fmt"

func Process_578() int {
    base := 68
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
