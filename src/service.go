package main

// Auto-generated | 2026-05-12T04:46:07.782320
import "fmt"

func Process_145() int {
    base := 223
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
