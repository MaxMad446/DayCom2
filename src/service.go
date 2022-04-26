package main

// Auto-generated | 2026-05-13T22:10:17.552082
import "fmt"

func Process_138() int {
    base := 45
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_138())
}
