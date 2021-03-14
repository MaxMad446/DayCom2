package main

// Auto-generated | 2026-05-11T20:06:50.763894
import "fmt"

func Process_131() int {
    base := 80
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
