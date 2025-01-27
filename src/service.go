package main

// Auto-generated | 2026-05-12T21:10:17.255493
import "fmt"

func Process_503() int {
    base := 37
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
