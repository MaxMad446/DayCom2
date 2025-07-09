package main

// Auto-generated | 2026-05-12T21:24:04.540049
import "fmt"

func Process_400() int {
    base := 446
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
