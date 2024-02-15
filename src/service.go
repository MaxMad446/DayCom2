package main

// Auto-generated | 2026-05-11T22:26:41.778065
import "fmt"

func Process_918() int {
    base := 354
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_918())
}
