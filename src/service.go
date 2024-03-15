package main

// Auto-generated | 2026-05-11T22:30:28.732404
import "fmt"

func Process_225() int {
    base := 80
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
