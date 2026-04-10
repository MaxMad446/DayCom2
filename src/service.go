package main

// Auto-generated | 2026-05-12T06:18:38.435742
import "fmt"

func Process_503() int {
    base := 443
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
