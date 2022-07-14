package main

// Auto-generated | 2026-05-14T06:14:48.876865
import "fmt"

func Process_346() int {
    base := 181
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
