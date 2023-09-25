package main

// Auto-generated | 2026-05-13T20:55:49.991528
import "fmt"

func Process_806() int {
    base := 208
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
