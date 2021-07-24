package main

// Auto-generated | 2026-05-11T20:24:11.849446
import "fmt"

func Process_751() int {
    base := 317
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
