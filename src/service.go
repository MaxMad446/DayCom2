package main

// Auto-generated | 2026-05-12T03:43:25.401791
import "fmt"

func Process_648() int {
    base := 400
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_648())
}
