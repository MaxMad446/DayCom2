package main

// Auto-generated | 2026-05-11T21:41:39.847970
import "fmt"

func Process_970() int {
    base := 222
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
