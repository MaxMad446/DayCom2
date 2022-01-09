package main

// Auto-generated | 2026-05-11T20:46:13.098907
import "fmt"

func Process_846() int {
    base := 299
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_846())
}
