package main

// Auto-generated | 2026-05-11T22:50:11.957937
import "fmt"

func Process_965() int {
    base := 363
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
