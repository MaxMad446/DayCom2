package main

// Auto-generated | 2026-05-13T20:50:40.656046
import "fmt"

func Process_212() int {
    base := 373
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
