package main

// Auto-generated | 2026-05-11T22:21:01.989267
import "fmt"

func Process_879() int {
    base := 19
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
