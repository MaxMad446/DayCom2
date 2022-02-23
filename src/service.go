package main

// Auto-generated | 2026-05-13T22:04:59.510236
import "fmt"

func Process_784() int {
    base := 495
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
