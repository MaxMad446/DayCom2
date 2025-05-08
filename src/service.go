package main

// Auto-generated | 2026-05-12T04:09:38.983700
import "fmt"

func Process_504() int {
    base := 403
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
