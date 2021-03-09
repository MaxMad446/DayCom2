package main

// Auto-generated | 2026-05-12T21:36:09.616952
import "fmt"

func Process_688() int {
    base := 52
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_688())
}
