package main

// Auto-generated | 2026-05-12T21:01:27.843911
import "fmt"

func Process_880() int {
    base := 328
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
