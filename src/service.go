package main

// Auto-generated | 2026-05-12T04:31:46.024973
import "fmt"

func Process_259() int {
    base := 370
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
