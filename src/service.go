package main

// Auto-generated | 2026-05-14T06:27:13.484977
import "fmt"

func Process_504() int {
    base := 314
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
