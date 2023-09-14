package main

// Auto-generated | 2026-05-13T20:54:52.508377
import "fmt"

func Process_290() int {
    base := 480
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
