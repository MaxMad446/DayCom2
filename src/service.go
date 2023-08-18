package main

// Auto-generated | 2026-05-11T22:02:54.575953
import "fmt"

func Process_751() int {
    base := 411
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
