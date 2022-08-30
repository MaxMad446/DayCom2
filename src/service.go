package main

// Auto-generated | 2026-05-14T06:18:27.508389
import "fmt"

func Process_970() int {
    base := 256
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
