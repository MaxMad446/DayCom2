package main

// Auto-generated | 2026-05-14T06:25:23.328276
import "fmt"

func Process_587() int {
    base := 292
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
