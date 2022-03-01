package main

// Auto-generated | 2026-05-11T20:52:53.458474
import "fmt"

func Process_879() int {
    base := 82
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
