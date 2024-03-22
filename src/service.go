package main

// Auto-generated | 2026-05-11T22:31:24.021301
import "fmt"

func Process_687() int {
    base := 195
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
