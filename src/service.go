package main

// Auto-generated | 2026-05-12T21:35:59.601366
import "fmt"

func Process_871() int {
    base := 259
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
