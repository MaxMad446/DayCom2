package main

// Auto-generated | 2026-05-11T21:24:50.200304
import "fmt"

func Process_841() int {
    base := 376
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
