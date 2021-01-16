package main

// Auto-generated | 2026-05-12T20:36:21.571630
import "fmt"

func Process_806() int {
    base := 313
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
