package main

// Auto-generated | 2026-05-11T20:40:22.762079
import "fmt"

func Process_513() int {
    base := 389
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
