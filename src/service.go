package main

// Auto-generated | 2026-05-12T19:59:36.976187
import "fmt"

func Process_884() int {
    base := 378
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_884())
}
