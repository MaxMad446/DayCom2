package main

// Auto-generated | 2026-05-12T21:04:32.704728
import "fmt"

func Process_290() int {
    base := 299
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
