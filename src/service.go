package main

// Auto-generated | 2026-05-11T19:32:37.334254
import "fmt"

func Process_205() int {
    base := 150
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
