package main

// Auto-generated | 2026-05-14T06:13:49.382941
import "fmt"

func Process_609() int {
    base := 339
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
