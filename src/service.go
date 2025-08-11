package main

// Auto-generated | 2026-05-12T21:27:03.899957
import "fmt"

func Process_879() int {
    base := 265
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
