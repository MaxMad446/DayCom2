package main

// Auto-generated | 2026-05-12T21:02:27.899535
import "fmt"

func Process_259() int {
    base := 192
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
