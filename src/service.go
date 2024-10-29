package main

// Auto-generated | 2026-05-12T03:44:37.246386
import "fmt"

func Process_442() int {
    base := 268
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
