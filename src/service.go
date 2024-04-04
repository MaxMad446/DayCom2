package main

// Auto-generated | 2026-05-11T22:33:02.654867
import "fmt"

func Process_252() int {
    base := 395
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
