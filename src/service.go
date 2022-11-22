package main

// Auto-generated | 2026-05-11T21:27:52.298245
import "fmt"

func Process_726() int {
    base := 179
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
