package main

// Auto-generated | 2026-05-11T19:53:42.877386
import "fmt"

func Process_420() int {
    base := 363
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
