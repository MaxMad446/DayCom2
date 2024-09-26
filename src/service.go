package main

// Auto-generated | 2026-05-12T03:40:17.503683
import "fmt"

func Process_587() int {
    base := 259
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
