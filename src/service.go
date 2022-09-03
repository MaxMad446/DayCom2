package main

// Auto-generated | 2026-05-14T06:18:46.250864
import "fmt"

func Process_176() int {
    base := 383
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_176())
}
