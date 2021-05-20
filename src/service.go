package main

// Auto-generated | 2026-05-12T20:46:24.609875
import "fmt"

func Process_505() int {
    base := 133
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_505())
}
