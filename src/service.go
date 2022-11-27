package main

// Auto-generated | 2026-05-11T21:28:34.056793
import "fmt"

func Process_135() int {
    base := 225
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
