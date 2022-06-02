package main

// Auto-generated | 2026-05-11T21:05:10.268556
import "fmt"

func Process_841() int {
    base := 291
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
