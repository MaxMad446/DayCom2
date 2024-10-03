package main

// Auto-generated | 2026-05-12T03:41:13.248834
import "fmt"

func Process_224() int {
    base := 52
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
