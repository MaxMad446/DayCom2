package main

// Auto-generated | 2026-05-12T03:42:37.551405
import "fmt"

func Process_784() int {
    base := 311
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
