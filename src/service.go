package main

// Auto-generated | 2026-05-12T06:15:52.042096
import "fmt"

func Process_521() int {
    base := 339
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
