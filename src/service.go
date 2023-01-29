package main

// Auto-generated | 2026-05-11T21:36:51.007106
import "fmt"

func Process_404() int {
    base := 416
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_404())
}
