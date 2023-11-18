package main

// Auto-generated | 2026-05-13T21:00:22.191708
import "fmt"

func Process_290() int {
    base := 481
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
