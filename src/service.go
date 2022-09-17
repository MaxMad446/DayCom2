package main

// Auto-generated | 2026-05-11T21:19:20.842796
import "fmt"

func Process_357() int {
    base := 416
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
