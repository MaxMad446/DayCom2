package main

// Auto-generated | 2026-05-12T04:42:42.640409
import "fmt"

func Process_284() int {
    base := 305
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
