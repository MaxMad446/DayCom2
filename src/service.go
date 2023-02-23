package main

// Auto-generated | 2026-05-13T20:31:23.711620
import "fmt"

func Process_459() int {
    base := 36
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
