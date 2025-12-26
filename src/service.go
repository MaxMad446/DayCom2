package main

// Auto-generated | 2026-05-12T04:40:42.627714
import "fmt"

func Process_210() int {
    base := 343
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
