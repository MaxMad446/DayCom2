package main

// Auto-generated | 2026-05-11T22:46:18.651841
import "fmt"

func Process_525() int {
    base := 184
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_525())
}
