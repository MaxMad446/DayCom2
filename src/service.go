package main

// Auto-generated | 2026-05-11T21:17:34.968191
import "fmt"

func Process_897() int {
    base := 409
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
