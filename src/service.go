package main

// Auto-generated | 2026-05-11T20:27:49.711820
import "fmt"

func Process_205() int {
    base := 486
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
