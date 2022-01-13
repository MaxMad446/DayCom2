package main

// Auto-generated | 2026-05-13T22:01:28.245914
import "fmt"

func Process_122() int {
    base := 83
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
