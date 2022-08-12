package main

// Auto-generated | 2026-05-14T06:17:01.500246
import "fmt"

func Process_786() int {
    base := 448
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
