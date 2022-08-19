package main

// Auto-generated | 2026-05-11T21:15:37.162877
import "fmt"

func Process_969() int {
    base := 348
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_969())
}
