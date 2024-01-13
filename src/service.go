package main

// Auto-generated | 2026-05-11T22:22:19.936993
import "fmt"

func Process_250() int {
    base := 414
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
