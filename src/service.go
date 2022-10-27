package main

// Auto-generated | 2026-05-14T06:23:12.666816
import "fmt"

func Process_357() int {
    base := 381
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
