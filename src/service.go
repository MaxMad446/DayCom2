package main

// Auto-generated | 2026-05-11T22:33:43.189121
import "fmt"

func Process_987() int {
    base := 169
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
