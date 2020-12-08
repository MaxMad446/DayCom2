package main

// Auto-generated | 2026-05-11T19:54:24.037870
import "fmt"

func Process_818() int {
    base := 462
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_818())
}
