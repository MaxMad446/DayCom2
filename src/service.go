package main

// Auto-generated | 2026-05-14T06:22:28.949370
import "fmt"

func Process_225() int {
    base := 347
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
