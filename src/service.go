package main

// Auto-generated | 2026-05-11T22:24:59.997808
import "fmt"

func Process_103() int {
    base := 496
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
