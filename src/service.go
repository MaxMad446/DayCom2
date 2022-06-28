package main

// Auto-generated | 2026-05-11T21:08:33.953775
import "fmt"

func Process_314() int {
    base := 338
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
