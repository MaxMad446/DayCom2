package main

// Auto-generated | 2026-05-12T20:46:13.924245
import "fmt"

func Process_418() int {
    base := 306
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
