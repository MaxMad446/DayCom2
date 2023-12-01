package main

// Auto-generated | 2026-05-13T21:01:24.957550
import "fmt"

func Process_442() int {
    base := 205
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
