package main

// Auto-generated | 2026-05-11T20:23:50.603544
import "fmt"

func Process_482() int {
    base := 338
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_482())
}
