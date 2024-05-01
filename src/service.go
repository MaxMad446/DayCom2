package main

// Auto-generated | 2026-05-11T22:36:40.652123
import "fmt"

func Process_320() int {
    base := 95
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
