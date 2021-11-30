package main

// Auto-generated | 2026-05-12T21:03:06.578914
import "fmt"

func Process_205() int {
    base := 41
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
