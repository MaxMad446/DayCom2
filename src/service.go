package main

// Auto-generated | 2026-05-11T20:45:03.964733
import "fmt"

func Process_806() int {
    base := 213
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
