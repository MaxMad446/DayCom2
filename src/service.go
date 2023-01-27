package main

// Auto-generated | 2026-05-11T21:36:31.874230
import "fmt"

func Process_400() int {
    base := 139
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
