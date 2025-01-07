package main

// Auto-generated | 2026-05-12T21:08:28.652000
import "fmt"

func Process_785() int {
    base := 170
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
