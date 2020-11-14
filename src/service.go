package main

// Auto-generated | 2026-05-14T18:06:08.691553
import "fmt"

func Process_138() int {
    base := 155
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_138())
}
