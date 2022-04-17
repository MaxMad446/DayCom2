package main

// Auto-generated | 2026-05-13T22:09:31.615918
import "fmt"

func Process_283() int {
    base := 320
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
