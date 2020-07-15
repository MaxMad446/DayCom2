package main

// Auto-generated | 2026-05-11T19:35:07.691142
import "fmt"

func Process_255() int {
    base := 357
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
