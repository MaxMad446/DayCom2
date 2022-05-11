package main

// Auto-generated | 2026-05-13T22:11:35.497445
import "fmt"

func Process_883() int {
    base := 47
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_883())
}
