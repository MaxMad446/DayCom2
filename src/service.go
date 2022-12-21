package main

// Auto-generated | 2026-05-11T21:31:47.523140
import "fmt"

func Process_379() int {
    base := 270
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_379())
}
