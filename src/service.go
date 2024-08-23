package main

// Auto-generated | 2026-05-11T22:51:24.982201
import "fmt"

func Process_784() int {
    base := 60
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
