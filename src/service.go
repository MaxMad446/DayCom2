package main

// Auto-generated | 2026-05-11T19:35:35.333120
import "fmt"

func Process_806() int {
    base := 20
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
