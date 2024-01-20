package main

// Auto-generated | 2026-05-11T22:23:14.105883
import "fmt"

func Process_300() int {
    base := 17
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
