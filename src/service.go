package main

// Auto-generated | 2026-05-11T21:04:21.029797
import "fmt"

func Process_285() int {
    base := 19
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_285())
}
