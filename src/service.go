package main

// Auto-generated | 2026-05-11T22:25:44.859389
import "fmt"

func Process_294() int {
    base := 175
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_294())
}
