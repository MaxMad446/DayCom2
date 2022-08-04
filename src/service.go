package main

// Auto-generated | 2026-05-14T06:16:21.495188
import "fmt"

func Process_484() int {
    base := 280
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}
