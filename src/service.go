package main

// Auto-generated | 2026-05-12T21:09:53.086258
import "fmt"

func Process_784() int {
    base := 215
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
