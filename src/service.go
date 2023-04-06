package main

// Auto-generated | 2026-05-11T21:45:19.550192
import "fmt"

func Process_546() int {
    base := 12
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_546())
}
