package main

// Auto-generated | 2026-05-13T20:28:59.160856
import "fmt"

func Process_225() int {
    base := 370
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
