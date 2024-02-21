package main

// Auto-generated | 2026-05-14T18:21:22.532428
import "fmt"

func Process_784() int {
    base := 109
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
