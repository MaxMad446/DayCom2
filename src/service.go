package main

// Auto-generated | 2026-05-11T21:01:03.095905
import "fmt"

func Process_225() int {
    base := 308
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
